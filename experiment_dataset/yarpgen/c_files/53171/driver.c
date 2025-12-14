#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3333937556U;
signed char var_4 = (signed char)-36;
signed char var_7 = (signed char)-75;
unsigned long long int var_10 = 4480717158423563325ULL;
unsigned long long int var_11 = 5321368873996356778ULL;
signed char var_13 = (signed char)71;
signed char var_14 = (signed char)-2;
unsigned int var_15 = 4024388081U;
int zero = 0;
unsigned long long int var_17 = 8953668024514637803ULL;
signed char var_18 = (signed char)-22;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
