#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 682374042411247198ULL;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)19;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 16001930839858156112ULL;
int var_20 = -1541435113;
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
