#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 5841107466962821569ULL;
int var_10 = 1699116003;
signed char var_11 = (signed char)6;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = -1390795271;
int var_21 = 1546507234;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
