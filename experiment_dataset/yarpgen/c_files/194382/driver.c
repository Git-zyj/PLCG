#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)56;
_Bool var_4 = (_Bool)0;
short var_7 = (short)-12078;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)32;
long long int var_13 = -4599501791325867048LL;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-13860;
void init() {
}

void checksum() {
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
