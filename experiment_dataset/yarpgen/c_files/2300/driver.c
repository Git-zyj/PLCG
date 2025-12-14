#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8404591076089340722LL;
signed char var_2 = (signed char)50;
long long int var_5 = 990717335131395115LL;
signed char var_8 = (signed char)96;
int zero = 0;
short var_20 = (short)29929;
short var_21 = (short)28366;
unsigned long long int var_22 = 1512464917575148194ULL;
void init() {
}

void checksum() {
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
