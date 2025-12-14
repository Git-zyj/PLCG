#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)29152;
signed char var_6 = (signed char)-90;
signed char var_7 = (signed char)-12;
short var_10 = (short)6291;
int zero = 0;
unsigned char var_12 = (unsigned char)18;
signed char var_13 = (signed char)3;
signed char var_14 = (signed char)23;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
