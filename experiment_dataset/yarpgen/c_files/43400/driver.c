#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7190;
unsigned int var_3 = 2654659015U;
signed char var_5 = (signed char)-16;
unsigned int var_6 = 2422193513U;
unsigned char var_7 = (unsigned char)81;
unsigned int var_8 = 1583368332U;
signed char var_9 = (signed char)-17;
short var_10 = (short)26286;
signed char var_11 = (signed char)36;
_Bool var_15 = (_Bool)1;
int zero = 0;
long long int var_16 = -2911542888843825040LL;
int var_17 = -1055341624;
unsigned long long int var_18 = 934656162224677707ULL;
short var_19 = (short)-31356;
unsigned long long int var_20 = 17585087293458014335ULL;
int var_21 = 2122236636;
unsigned long long int var_22 = 14112069229239041809ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
