#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7536;
unsigned int var_4 = 447465929U;
_Bool var_7 = (_Bool)0;
_Bool var_11 = (_Bool)1;
unsigned int var_15 = 3859439865U;
unsigned int var_17 = 2414428642U;
int zero = 0;
unsigned long long int var_18 = 1671021655162506501ULL;
short var_19 = (short)-99;
void init() {
}

void checksum() {
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
