#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1325890235;
unsigned int var_9 = 2056563779U;
unsigned short var_10 = (unsigned short)7838;
unsigned short var_13 = (unsigned short)36038;
int zero = 0;
int var_14 = -1688714638;
int var_15 = 2028956877;
signed char var_16 = (signed char)3;
unsigned long long int var_17 = 10922436465101931924ULL;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
