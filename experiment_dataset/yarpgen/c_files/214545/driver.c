#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27248;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)90;
unsigned short var_9 = (unsigned short)52811;
int var_16 = -1647020009;
int zero = 0;
short var_18 = (short)20876;
unsigned char var_19 = (unsigned char)15;
void init() {
}

void checksum() {
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
