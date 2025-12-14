#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-113;
unsigned long long int var_4 = 3230509591526775880ULL;
signed char var_5 = (signed char)-10;
signed char var_14 = (signed char)-44;
unsigned long long int var_15 = 13335916575987297527ULL;
int zero = 0;
signed char var_16 = (signed char)0;
unsigned long long int var_17 = 8168451164192849922ULL;
unsigned long long int var_18 = 7476616002310991810ULL;
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
