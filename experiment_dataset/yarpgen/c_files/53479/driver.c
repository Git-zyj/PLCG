#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16432;
long long int var_3 = 2722192360199152091LL;
int var_4 = -1742328861;
_Bool var_8 = (_Bool)0;
int var_11 = -1356614090;
int zero = 0;
unsigned char var_13 = (unsigned char)168;
unsigned char var_14 = (unsigned char)198;
_Bool var_15 = (_Bool)1;
int var_16 = 1090901113;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
