#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-32730;
short var_7 = (short)5763;
short var_8 = (short)8126;
int var_12 = 269517855;
short var_15 = (short)-20545;
short var_16 = (short)-21413;
int zero = 0;
unsigned char var_19 = (unsigned char)105;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
