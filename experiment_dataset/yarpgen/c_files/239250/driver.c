#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -786869595;
unsigned char var_3 = (unsigned char)35;
long long int var_5 = -2074868824951814620LL;
short var_6 = (short)-30808;
long long int var_8 = -1910077726747488876LL;
_Bool var_10 = (_Bool)0;
unsigned int var_12 = 70664027U;
unsigned int var_16 = 3897536910U;
unsigned char var_17 = (unsigned char)67;
int var_18 = -1940482725;
unsigned char var_19 = (unsigned char)196;
int zero = 0;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
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
