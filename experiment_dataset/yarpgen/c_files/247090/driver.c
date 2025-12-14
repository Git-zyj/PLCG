#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)83;
int var_2 = 298658855;
unsigned short var_3 = (unsigned short)43089;
unsigned char var_5 = (unsigned char)81;
_Bool var_6 = (_Bool)0;
short var_8 = (short)-1082;
unsigned char var_9 = (unsigned char)84;
signed char var_13 = (signed char)38;
short var_15 = (short)-5558;
int zero = 0;
_Bool var_16 = (_Bool)0;
int var_17 = -258851063;
unsigned short var_18 = (unsigned short)56496;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
