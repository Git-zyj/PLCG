#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-51;
short var_4 = (short)13426;
unsigned char var_6 = (unsigned char)116;
long long int var_7 = -8354387386601207517LL;
signed char var_12 = (signed char)120;
unsigned long long int var_13 = 3770680187677409593ULL;
int var_14 = 1014904904;
int var_15 = 50470882;
signed char var_16 = (signed char)-31;
int var_17 = 1979910526;
int zero = 0;
unsigned char var_20 = (unsigned char)181;
signed char var_21 = (signed char)-84;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
