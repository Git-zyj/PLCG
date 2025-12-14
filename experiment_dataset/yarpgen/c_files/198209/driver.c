#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 216456580U;
unsigned int var_1 = 4040976216U;
short var_3 = (short)32638;
int var_4 = -1828846409;
long long int var_5 = 8591829709078788814LL;
unsigned int var_7 = 2430034974U;
long long int var_9 = -2024931237054656474LL;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)1965;
int var_18 = -768001873;
int zero = 0;
short var_19 = (short)11157;
unsigned long long int var_20 = 1221249863111228578ULL;
int var_21 = 28872799;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
