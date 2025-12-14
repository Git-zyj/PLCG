#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22909;
short var_2 = (short)29683;
short var_6 = (short)30621;
signed char var_11 = (signed char)35;
int zero = 0;
signed char var_18 = (signed char)44;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 4070337794U;
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
