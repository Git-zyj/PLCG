#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)39672;
_Bool var_5 = (_Bool)0;
int var_8 = -415368415;
long long int var_10 = 3125157550787858120LL;
signed char var_12 = (signed char)94;
unsigned short var_16 = (unsigned short)62475;
int var_17 = 1691204374;
int zero = 0;
unsigned short var_18 = (unsigned short)55314;
short var_19 = (short)-14969;
short var_20 = (short)4651;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
