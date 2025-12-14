#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1660929734U;
unsigned long long int var_3 = 10336616215423857389ULL;
unsigned long long int var_4 = 17257222246817036373ULL;
unsigned long long int var_8 = 10009686849036077458ULL;
unsigned int var_9 = 1183182815U;
unsigned long long int var_10 = 9165958622200744399ULL;
unsigned int var_13 = 1164414398U;
unsigned long long int var_14 = 18299711101965549956ULL;
int zero = 0;
unsigned int var_15 = 287592870U;
unsigned int var_16 = 3227556468U;
unsigned long long int var_17 = 8386223106967985648ULL;
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
