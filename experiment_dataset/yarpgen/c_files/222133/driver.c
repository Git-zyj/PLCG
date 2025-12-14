#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)8;
unsigned short var_4 = (unsigned short)19435;
unsigned long long int var_5 = 14547062278679287216ULL;
signed char var_6 = (signed char)-117;
short var_10 = (short)10465;
int zero = 0;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)0;
short var_13 = (short)17732;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
