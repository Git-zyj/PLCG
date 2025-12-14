#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2781330408U;
unsigned char var_2 = (unsigned char)93;
unsigned int var_6 = 3145726085U;
short var_8 = (short)-17642;
int zero = 0;
short var_19 = (short)22131;
unsigned short var_20 = (unsigned short)42135;
unsigned int var_21 = 534398267U;
signed char var_22 = (signed char)-90;
void init() {
}

void checksum() {
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
