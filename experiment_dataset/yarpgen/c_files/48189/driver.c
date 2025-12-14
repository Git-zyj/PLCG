#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1339502384U;
int var_3 = -1133579182;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
unsigned short var_9 = (unsigned short)13946;
unsigned int var_10 = 3746301789U;
int var_11 = -1971381998;
signed char var_12 = (signed char)41;
int zero = 0;
unsigned long long int var_13 = 15735095740232760069ULL;
unsigned short var_14 = (unsigned short)21467;
unsigned int var_15 = 1916297492U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
