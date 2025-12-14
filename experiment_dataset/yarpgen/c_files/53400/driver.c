#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1594595063;
unsigned char var_2 = (unsigned char)18;
unsigned short var_8 = (unsigned short)44383;
signed char var_11 = (signed char)-96;
int var_14 = -1404632833;
int zero = 0;
unsigned int var_17 = 4277270266U;
short var_18 = (short)-29251;
short var_19 = (short)26615;
void init() {
}

void checksum() {
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
