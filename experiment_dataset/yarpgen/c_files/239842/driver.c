#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 949767873U;
unsigned int var_5 = 1915559012U;
unsigned char var_8 = (unsigned char)178;
_Bool var_11 = (_Bool)0;
unsigned short var_13 = (unsigned short)10116;
int zero = 0;
unsigned char var_15 = (unsigned char)223;
short var_16 = (short)20945;
unsigned short var_17 = (unsigned short)40164;
signed char var_18 = (signed char)-50;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
