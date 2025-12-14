#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1999837174;
unsigned int var_5 = 578520177U;
short var_6 = (short)-11857;
unsigned long long int var_10 = 8118784355873978556ULL;
int var_11 = 2044394327;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)6;
void init() {
}

void checksum() {
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
