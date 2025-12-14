#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)251;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)52;
unsigned long long int var_4 = 15199337033601301985ULL;
unsigned short var_8 = (unsigned short)55032;
int zero = 0;
short var_13 = (short)-26602;
signed char var_14 = (signed char)-11;
int var_15 = -1592473176;
unsigned short var_16 = (unsigned short)33064;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
