#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30093;
unsigned int var_3 = 3350012946U;
long long int var_5 = 5485007037061233069LL;
short var_6 = (short)14934;
int var_8 = 1034955385;
long long int var_10 = -76984985857202789LL;
unsigned int var_12 = 509974099U;
int zero = 0;
long long int var_13 = 1520885654422073435LL;
unsigned long long int var_14 = 5487950113036870341ULL;
unsigned long long int var_15 = 10412414488263538386ULL;
unsigned long long int var_16 = 2269345863789011521ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
