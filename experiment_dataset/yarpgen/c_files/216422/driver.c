#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7954877747543677805LL;
unsigned int var_5 = 2859718306U;
unsigned int var_6 = 1240633648U;
long long int var_7 = 486080915611297164LL;
unsigned int var_11 = 2687711579U;
int zero = 0;
unsigned int var_15 = 1959290100U;
unsigned long long int var_16 = 389962304455376987ULL;
unsigned short var_17 = (unsigned short)53293;
unsigned long long int var_18 = 17792164646492579797ULL;
unsigned char var_19 = (unsigned char)41;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
