#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4043739507U;
short var_4 = (short)31864;
long long int var_8 = -6516599332623133541LL;
signed char var_11 = (signed char)-107;
unsigned int var_13 = 2385348882U;
long long int var_14 = -6222187701027079324LL;
short var_15 = (short)6260;
long long int var_19 = 5651134754436920797LL;
int zero = 0;
signed char var_20 = (signed char)-66;
unsigned char var_21 = (unsigned char)160;
int var_22 = 1415883291;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
