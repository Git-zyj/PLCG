#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_3 = (unsigned short)40479;
_Bool var_5 = (_Bool)0;
signed char var_10 = (signed char)47;
unsigned char var_13 = (unsigned char)52;
int zero = 0;
unsigned short var_14 = (unsigned short)50280;
signed char var_15 = (signed char)-41;
signed char var_16 = (signed char)118;
unsigned short var_17 = (unsigned short)7747;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
