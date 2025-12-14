#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)337;
long long int var_5 = -4241549904350343308LL;
unsigned long long int var_6 = 15407759570174446610ULL;
unsigned short var_7 = (unsigned short)59895;
unsigned long long int var_11 = 10669340017453686210ULL;
unsigned int var_12 = 1945215186U;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)8481;
int var_15 = -783624395;
_Bool var_16 = (_Bool)0;
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
