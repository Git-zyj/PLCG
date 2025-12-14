#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3624462141652139281LL;
long long int var_2 = 8070264971496886891LL;
unsigned long long int var_13 = 17761566788164071461ULL;
int zero = 0;
signed char var_15 = (signed char)-6;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 28127728507727754ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
