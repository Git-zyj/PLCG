#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2044384000;
int var_2 = -86590403;
unsigned long long int var_5 = 11165517635842087459ULL;
int var_6 = 1385465744;
signed char var_9 = (signed char)-68;
int var_12 = 1754452254;
int zero = 0;
unsigned short var_14 = (unsigned short)10913;
long long int var_15 = 8067663018101461709LL;
void init() {
}

void checksum() {
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
