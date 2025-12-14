#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)248;
_Bool var_3 = (_Bool)1;
unsigned int var_7 = 3789623510U;
short var_10 = (short)-2192;
int var_12 = -41509753;
unsigned short var_13 = (unsigned short)32698;
int zero = 0;
int var_15 = 1005108467;
signed char var_16 = (signed char)-58;
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
