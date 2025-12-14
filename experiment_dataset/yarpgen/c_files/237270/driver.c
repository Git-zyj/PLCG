#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 1625599322;
unsigned int var_2 = 4284618078U;
short var_6 = (short)-22282;
long long int var_10 = 2925190246596326108LL;
int zero = 0;
int var_11 = -565377074;
signed char var_12 = (signed char)78;
unsigned short var_13 = (unsigned short)52349;
long long int var_14 = 5026323415697687935LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
