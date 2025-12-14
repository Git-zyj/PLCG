#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)62961;
short var_7 = (short)24542;
unsigned char var_12 = (unsigned char)63;
unsigned short var_14 = (unsigned short)18184;
unsigned short var_17 = (unsigned short)18434;
int zero = 0;
unsigned char var_20 = (unsigned char)113;
signed char var_21 = (signed char)94;
unsigned short var_22 = (unsigned short)50934;
signed char var_23 = (signed char)112;
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
