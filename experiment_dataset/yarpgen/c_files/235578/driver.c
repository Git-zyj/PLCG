#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = -5099471778509301827LL;
short var_4 = (short)-18035;
_Bool var_5 = (_Bool)0;
int zero = 0;
unsigned short var_12 = (unsigned short)24118;
unsigned short var_13 = (unsigned short)65533;
unsigned char var_14 = (unsigned char)148;
unsigned long long int var_15 = 13207310362847524449ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
