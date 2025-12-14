#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned char var_5 = (unsigned char)136;
unsigned long long int var_6 = 12744236053921573636ULL;
unsigned short var_11 = (unsigned short)619;
unsigned short var_12 = (unsigned short)12558;
short var_13 = (short)-30917;
int zero = 0;
unsigned int var_15 = 3479864940U;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 8974288551943103219ULL;
int var_18 = 2144641002;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
