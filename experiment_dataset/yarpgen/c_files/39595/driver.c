#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1149501430U;
long long int var_3 = -5224862760476698039LL;
unsigned long long int var_6 = 10878135656945918147ULL;
signed char var_11 = (signed char)1;
unsigned short var_12 = (unsigned short)57170;
int zero = 0;
unsigned long long int var_15 = 1199991417194269104ULL;
long long int var_16 = 2611011245095861841LL;
unsigned long long int var_17 = 15991501979813271157ULL;
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
