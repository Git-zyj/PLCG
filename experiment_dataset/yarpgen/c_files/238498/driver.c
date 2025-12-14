#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 13000740815446403013ULL;
unsigned char var_5 = (unsigned char)16;
unsigned long long int var_7 = 10183721829213743258ULL;
_Bool var_9 = (_Bool)1;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 3284180667U;
signed char var_15 = (signed char)105;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
