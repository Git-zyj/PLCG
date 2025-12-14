#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8367668300425423165LL;
short var_1 = (short)-28115;
signed char var_2 = (signed char)55;
unsigned int var_4 = 2492676906U;
_Bool var_5 = (_Bool)1;
short var_10 = (short)-15154;
int zero = 0;
short var_11 = (short)-13308;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 245224691U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
