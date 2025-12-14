#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-67;
unsigned char var_4 = (unsigned char)71;
unsigned int var_9 = 2191317025U;
_Bool var_11 = (_Bool)1;
unsigned int var_15 = 1233231088U;
int zero = 0;
signed char var_20 = (signed char)125;
short var_21 = (short)8712;
unsigned char var_22 = (unsigned char)184;
unsigned char var_23 = (unsigned char)241;
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
