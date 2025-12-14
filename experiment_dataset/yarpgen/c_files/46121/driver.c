#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-56;
unsigned short var_1 = (unsigned short)61823;
unsigned int var_4 = 630912392U;
long long int var_5 = -4388283143171674164LL;
unsigned int var_6 = 2188471547U;
long long int var_7 = -4319720640601906282LL;
unsigned long long int var_8 = 11190802598287897615ULL;
_Bool var_9 = (_Bool)0;
short var_10 = (short)-31092;
unsigned short var_11 = (unsigned short)9129;
int zero = 0;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 1332604654U;
int var_15 = -390987433;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
