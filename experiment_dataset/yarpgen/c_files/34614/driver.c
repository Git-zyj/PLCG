#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3095688427U;
unsigned int var_2 = 2590088747U;
short var_3 = (short)32190;
unsigned int var_5 = 18563515U;
short var_7 = (short)-5937;
unsigned char var_8 = (unsigned char)249;
short var_9 = (short)19915;
unsigned short var_11 = (unsigned short)26708;
short var_13 = (short)10874;
short var_16 = (short)31535;
int zero = 0;
unsigned short var_19 = (unsigned short)18601;
long long int var_20 = -3392878566860670957LL;
unsigned short var_21 = (unsigned short)1317;
void init() {
}

void checksum() {
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
