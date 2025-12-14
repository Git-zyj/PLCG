#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1427812481;
_Bool var_2 = (_Bool)1;
signed char var_4 = (signed char)37;
signed char var_10 = (signed char)55;
unsigned int var_13 = 3631069248U;
_Bool var_14 = (_Bool)0;
short var_16 = (short)-30034;
int zero = 0;
int var_18 = -501797024;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-28401;
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
