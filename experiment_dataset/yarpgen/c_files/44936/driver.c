#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned int var_4 = 3010360943U;
unsigned char var_9 = (unsigned char)166;
signed char var_11 = (signed char)-67;
unsigned long long int var_16 = 7819264617465204056ULL;
int zero = 0;
short var_19 = (short)-5024;
short var_20 = (short)5569;
unsigned short var_21 = (unsigned short)60911;
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
