#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)114;
short var_1 = (short)9329;
unsigned char var_4 = (unsigned char)69;
unsigned short var_7 = (unsigned short)62017;
long long int var_10 = -6942036447708103970LL;
short var_13 = (short)-28759;
long long int var_14 = 7596101349051812106LL;
int zero = 0;
short var_20 = (short)4522;
signed char var_21 = (signed char)19;
short var_22 = (short)5344;
int var_23 = 688176617;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
