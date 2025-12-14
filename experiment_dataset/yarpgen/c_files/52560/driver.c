#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1553590296;
long long int var_2 = -3234846317912226394LL;
int var_3 = 1166392544;
int var_7 = -356206515;
long long int var_9 = -2390366195600657074LL;
unsigned long long int var_12 = 1130095476349545195ULL;
int var_14 = -911085396;
int zero = 0;
int var_15 = -703951979;
long long int var_16 = 5969581540253463548LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
