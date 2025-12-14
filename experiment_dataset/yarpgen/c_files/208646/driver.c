#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-23972;
unsigned int var_4 = 4047775761U;
long long int var_6 = 6855660620957224064LL;
unsigned int var_8 = 3383865436U;
long long int var_9 = 4192810017018295310LL;
unsigned int var_11 = 667726768U;
int zero = 0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-18612;
unsigned short var_18 = (unsigned short)51476;
short var_19 = (short)-4006;
void init() {
}

void checksum() {
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
