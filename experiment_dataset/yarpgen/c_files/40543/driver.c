#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)70;
unsigned int var_4 = 2482704426U;
short var_5 = (short)23913;
short var_6 = (short)-307;
signed char var_9 = (signed char)-5;
unsigned char var_10 = (unsigned char)80;
_Bool var_11 = (_Bool)1;
short var_14 = (short)31982;
int zero = 0;
signed char var_15 = (signed char)-78;
unsigned char var_16 = (unsigned char)155;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
