#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-15796;
_Bool var_11 = (_Bool)0;
unsigned char var_14 = (unsigned char)108;
int zero = 0;
signed char var_20 = (signed char)11;
unsigned long long int var_21 = 1313997124363243286ULL;
unsigned short var_22 = (unsigned short)46653;
unsigned long long int var_23 = 1798889589773460424ULL;
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
