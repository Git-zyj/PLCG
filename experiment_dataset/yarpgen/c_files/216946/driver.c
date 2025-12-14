#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)222;
unsigned int var_1 = 1881657488U;
short var_6 = (short)10541;
long long int var_7 = -4640603935940023566LL;
unsigned int var_10 = 1058405868U;
unsigned short var_11 = (unsigned short)55635;
short var_14 = (short)15911;
int zero = 0;
signed char var_17 = (signed char)-55;
unsigned char var_18 = (unsigned char)176;
unsigned short var_19 = (unsigned short)29218;
short var_20 = (short)-8670;
void init() {
}

void checksum() {
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
