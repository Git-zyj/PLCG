#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3548812036U;
_Bool var_1 = (_Bool)1;
long long int var_3 = -632843990338304714LL;
signed char var_4 = (signed char)-2;
short var_6 = (short)124;
int zero = 0;
unsigned char var_12 = (unsigned char)165;
unsigned char var_13 = (unsigned char)139;
signed char var_14 = (signed char)-88;
void init() {
}

void checksum() {
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
