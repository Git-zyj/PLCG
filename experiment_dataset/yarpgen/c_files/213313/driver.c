#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)153;
short var_8 = (short)-5531;
unsigned char var_10 = (unsigned char)168;
int zero = 0;
unsigned short var_16 = (unsigned short)25415;
int var_17 = 414124219;
short var_18 = (short)-16345;
unsigned long long int var_19 = 14618457981561365506ULL;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
