#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-29009;
unsigned short var_3 = (unsigned short)6989;
int var_4 = 1351812541;
int var_5 = 82149718;
signed char var_6 = (signed char)86;
short var_13 = (short)-21276;
int var_14 = 1071369766;
signed char var_15 = (signed char)109;
int zero = 0;
signed char var_16 = (signed char)-46;
short var_17 = (short)-31004;
int var_18 = 1634894598;
unsigned int var_19 = 2674470616U;
unsigned long long int var_20 = 452490898528819464ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
