#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -732729998;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)-58;
signed char var_7 = (signed char)33;
signed char var_9 = (signed char)-61;
unsigned short var_11 = (unsigned short)26376;
unsigned short var_14 = (unsigned short)29202;
short var_15 = (short)-4883;
int zero = 0;
signed char var_16 = (signed char)-24;
unsigned int var_17 = 2156155428U;
long long int var_18 = -6917695715621513271LL;
short var_19 = (short)-6264;
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
