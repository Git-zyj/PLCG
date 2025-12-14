#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)161;
short var_6 = (short)-6678;
unsigned int var_7 = 2037958346U;
unsigned int var_11 = 961210968U;
unsigned short var_14 = (unsigned short)55446;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)90;
int zero = 0;
short var_18 = (short)-6146;
unsigned int var_19 = 1108322005U;
void init() {
}

void checksum() {
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
