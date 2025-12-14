#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)10;
_Bool var_7 = (_Bool)0;
short var_11 = (short)-8614;
unsigned char var_17 = (unsigned char)101;
int zero = 0;
unsigned short var_19 = (unsigned short)43944;
signed char var_20 = (signed char)46;
signed char var_21 = (signed char)-94;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 12368441590705289879ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
