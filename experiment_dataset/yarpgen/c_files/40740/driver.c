#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3779373685U;
signed char var_3 = (signed char)-57;
short var_4 = (short)6328;
short var_5 = (short)7073;
short var_7 = (short)21390;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 12900052234234092985ULL;
signed char var_17 = (signed char)-78;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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
