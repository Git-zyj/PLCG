#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18179438838949325847ULL;
unsigned long long int var_2 = 6630204542271153158ULL;
short var_4 = (short)-24521;
short var_7 = (short)-18395;
_Bool var_8 = (_Bool)1;
short var_10 = (short)18068;
short var_12 = (short)-31224;
int zero = 0;
signed char var_14 = (signed char)91;
int var_15 = -1937861428;
unsigned long long int var_16 = 3551526916929173491ULL;
void init() {
}

void checksum() {
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
