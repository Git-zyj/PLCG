#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_2 = 2618007410U;
unsigned long long int var_3 = 1640757493013420096ULL;
unsigned long long int var_6 = 2828116321656800009ULL;
_Bool var_7 = (_Bool)1;
int zero = 0;
unsigned int var_11 = 3844807313U;
int var_12 = -1050583791;
signed char var_13 = (signed char)-61;
unsigned long long int var_14 = 7202177381643563984ULL;
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
