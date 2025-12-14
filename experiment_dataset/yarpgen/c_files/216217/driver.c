#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-14258;
_Bool var_4 = (_Bool)1;
int var_7 = -86114484;
signed char var_10 = (signed char)-126;
int var_11 = -622959016;
int zero = 0;
unsigned char var_12 = (unsigned char)88;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
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
