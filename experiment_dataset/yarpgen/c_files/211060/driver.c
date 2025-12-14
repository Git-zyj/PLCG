#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -4502340;
int var_2 = -1896984552;
_Bool var_6 = (_Bool)0;
int var_8 = -2074959765;
_Bool var_11 = (_Bool)1;
int var_12 = 743446148;
int var_13 = -277351898;
int zero = 0;
long long int var_16 = -3084561166833989156LL;
long long int var_17 = -5483408706618483660LL;
unsigned short var_18 = (unsigned short)35034;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
