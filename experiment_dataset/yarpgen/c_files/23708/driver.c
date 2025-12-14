#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-32;
unsigned int var_3 = 4116079311U;
short var_4 = (short)7170;
unsigned long long int var_5 = 7177513780769145713ULL;
unsigned int var_7 = 945495443U;
unsigned int var_9 = 2166493267U;
unsigned int var_11 = 3558822968U;
short var_12 = (short)-30808;
short var_13 = (short)22298;
unsigned int var_15 = 3436971484U;
short var_17 = (short)16353;
int zero = 0;
unsigned int var_18 = 3380683248U;
unsigned int var_19 = 1486438786U;
unsigned long long int var_20 = 6009224266468218271ULL;
unsigned int var_21 = 1071818652U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
