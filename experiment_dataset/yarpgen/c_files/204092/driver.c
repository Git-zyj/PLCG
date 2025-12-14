#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)24969;
unsigned char var_7 = (unsigned char)62;
short var_9 = (short)10544;
_Bool var_11 = (_Bool)1;
short var_13 = (short)-11852;
int zero = 0;
long long int var_16 = -5728126967157712693LL;
unsigned short var_17 = (unsigned short)58591;
signed char var_18 = (signed char)-100;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
