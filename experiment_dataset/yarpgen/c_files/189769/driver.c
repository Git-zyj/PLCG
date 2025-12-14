#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)51786;
unsigned short var_5 = (unsigned short)27152;
_Bool var_8 = (_Bool)0;
unsigned short var_10 = (unsigned short)3676;
unsigned int var_11 = 3593057081U;
int zero = 0;
short var_12 = (short)-19158;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
