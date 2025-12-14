#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)205;
short var_2 = (short)24934;
_Bool var_3 = (_Bool)1;
short var_4 = (short)23499;
unsigned int var_6 = 4171584541U;
_Bool var_7 = (_Bool)1;
short var_12 = (short)-17109;
unsigned int var_14 = 1252180945U;
int zero = 0;
unsigned int var_16 = 209169675U;
short var_17 = (short)5924;
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
