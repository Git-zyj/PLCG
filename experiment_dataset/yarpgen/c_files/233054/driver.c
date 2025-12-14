#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2194523950U;
signed char var_1 = (signed char)49;
unsigned long long int var_3 = 12785327411010138701ULL;
short var_4 = (short)-6273;
unsigned short var_5 = (unsigned short)6796;
short var_6 = (short)-8588;
unsigned int var_8 = 1216577692U;
unsigned long long int var_10 = 1920569627648542243ULL;
unsigned int var_12 = 904790398U;
short var_13 = (short)25521;
long long int var_14 = -2223969566344978888LL;
unsigned long long int var_15 = 10942756116447015520ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)1658;
unsigned int var_17 = 2247115111U;
unsigned long long int var_18 = 13226547726768529053ULL;
unsigned int var_19 = 230988517U;
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
