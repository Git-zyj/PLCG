#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-102;
unsigned short var_2 = (unsigned short)45726;
unsigned int var_4 = 519794896U;
unsigned int var_5 = 615085950U;
signed char var_6 = (signed char)83;
signed char var_7 = (signed char)-48;
short var_8 = (short)9723;
signed char var_10 = (signed char)58;
unsigned int var_11 = 1679138203U;
unsigned int var_12 = 1213706586U;
short var_13 = (short)-19350;
signed char var_16 = (signed char)55;
int zero = 0;
unsigned int var_17 = 3329751518U;
unsigned char var_18 = (unsigned char)215;
signed char var_19 = (signed char)-124;
signed char var_20 = (signed char)102;
signed char var_21 = (signed char)77;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
