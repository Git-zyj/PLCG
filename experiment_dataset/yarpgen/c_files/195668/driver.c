#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4029339121274013365ULL;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)62;
signed char var_5 = (signed char)-32;
unsigned int var_6 = 271712730U;
long long int var_7 = 5121955511704993883LL;
short var_9 = (short)-16389;
unsigned int var_10 = 3528122520U;
unsigned long long int var_11 = 16420191781604637771ULL;
short var_12 = (short)-32630;
short var_13 = (short)-4221;
int var_14 = -1585288197;
unsigned long long int var_15 = 6823820771904549889ULL;
int zero = 0;
int var_16 = 1623044491;
unsigned int var_17 = 436658190U;
unsigned short var_18 = (unsigned short)31089;
unsigned short var_19 = (unsigned short)63369;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
