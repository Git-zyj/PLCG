#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)1;
short var_10 = (short)-16102;
unsigned char var_14 = (unsigned char)57;
unsigned long long int var_16 = 9900744190181550617ULL;
unsigned char var_18 = (unsigned char)59;
int zero = 0;
unsigned long long int var_19 = 13683066736815552174ULL;
signed char var_20 = (signed char)-119;
unsigned char var_21 = (unsigned char)182;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
