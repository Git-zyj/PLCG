#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)44661;
unsigned long long int var_4 = 10189619180603459844ULL;
unsigned long long int var_7 = 5128913658092126757ULL;
int var_8 = -1057591900;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)45230;
int zero = 0;
unsigned int var_17 = 3013975189U;
short var_18 = (short)28109;
void init() {
}

void checksum() {
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
