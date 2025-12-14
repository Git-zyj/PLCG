#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19593;
signed char var_3 = (signed char)80;
short var_6 = (short)-4191;
_Bool var_7 = (_Bool)0;
int var_12 = -182021253;
int zero = 0;
signed char var_15 = (signed char)-30;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)50;
signed char var_18 = (signed char)115;
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
