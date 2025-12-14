#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)200;
short var_6 = (short)4000;
unsigned int var_7 = 105908173U;
int var_11 = -319888634;
_Bool var_14 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)-33;
unsigned char var_18 = (unsigned char)146;
unsigned short var_19 = (unsigned short)55547;
_Bool var_20 = (_Bool)0;
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
