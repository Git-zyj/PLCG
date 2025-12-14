#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -931449002;
unsigned long long int var_6 = 16310900841154571469ULL;
signed char var_11 = (signed char)-54;
signed char var_13 = (signed char)-95;
int var_14 = 1877671560;
signed char var_16 = (signed char)-102;
int zero = 0;
unsigned char var_20 = (unsigned char)16;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
short var_23 = (short)-26506;
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
