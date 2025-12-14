#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 6670300776578298916LL;
signed char var_11 = (signed char)-125;
long long int var_12 = 2218810034417871257LL;
int zero = 0;
long long int var_15 = 2662167103669796651LL;
short var_16 = (short)21201;
signed char var_17 = (signed char)-98;
int var_18 = -2046167716;
signed char var_19 = (signed char)-117;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
