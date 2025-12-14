#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3104701511U;
long long int var_4 = 6366954087815487775LL;
unsigned long long int var_8 = 17671039389117787575ULL;
unsigned char var_9 = (unsigned char)192;
unsigned int var_10 = 2496009071U;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 15557300390915886719ULL;
int zero = 0;
unsigned long long int var_17 = 12152722944323331404ULL;
signed char var_18 = (signed char)-65;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
