#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2745860094U;
int var_3 = -1659570371;
signed char var_7 = (signed char)-24;
int zero = 0;
int var_10 = -139852171;
unsigned long long int var_11 = 6543820536402661147ULL;
unsigned long long int var_12 = 9960264580906078117ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
