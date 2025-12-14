#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-49;
signed char var_4 = (signed char)15;
signed char var_9 = (signed char)118;
int var_16 = 1930054561;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 2412958046U;
_Bool var_21 = (_Bool)0;
short var_22 = (short)29502;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
