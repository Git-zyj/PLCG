#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)205;
short var_2 = (short)20363;
short var_6 = (short)26679;
_Bool var_9 = (_Bool)0;
short var_11 = (short)4940;
unsigned char var_15 = (unsigned char)40;
int zero = 0;
unsigned short var_16 = (unsigned short)48750;
unsigned char var_17 = (unsigned char)83;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
