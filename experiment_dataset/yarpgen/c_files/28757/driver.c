#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39703;
int var_4 = 242950519;
unsigned short var_5 = (unsigned short)59645;
unsigned short var_7 = (unsigned short)4725;
signed char var_10 = (signed char)93;
long long int var_11 = 1467431759359345727LL;
int zero = 0;
short var_12 = (short)32113;
short var_13 = (short)-10211;
unsigned long long int var_14 = 10867208236680912535ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
