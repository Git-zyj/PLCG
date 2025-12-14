#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)4475;
signed char var_6 = (signed char)43;
long long int var_10 = 6141543308627530228LL;
signed char var_13 = (signed char)35;
int zero = 0;
signed char var_15 = (signed char)118;
signed char var_16 = (signed char)43;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
