#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-114;
signed char var_1 = (signed char)75;
short var_2 = (short)28582;
short var_5 = (short)-341;
signed char var_7 = (signed char)118;
_Bool var_8 = (_Bool)1;
long long int var_9 = 1000311251264385946LL;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 4274103568U;
_Bool var_13 = (_Bool)0;
unsigned long long int var_15 = 6009815567945693104ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)70;
signed char var_17 = (signed char)14;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
