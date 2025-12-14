#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28422;
short var_1 = (short)11912;
long long int var_5 = -580878994597353926LL;
short var_7 = (short)-2909;
signed char var_10 = (signed char)127;
unsigned int var_11 = 1589277685U;
int zero = 0;
unsigned char var_17 = (unsigned char)7;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-88;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
