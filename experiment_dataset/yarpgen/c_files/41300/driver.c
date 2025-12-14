#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)17014;
unsigned short var_6 = (unsigned short)21585;
unsigned long long int var_9 = 16442831537776792067ULL;
signed char var_12 = (signed char)-7;
signed char var_15 = (signed char)-78;
int zero = 0;
unsigned short var_16 = (unsigned short)43560;
short var_17 = (short)3066;
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
