#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2661458321U;
unsigned int var_2 = 4214986674U;
unsigned int var_4 = 1972453634U;
unsigned int var_5 = 3512754412U;
unsigned int var_6 = 4113717715U;
unsigned int var_7 = 3829849575U;
unsigned int var_8 = 2271911093U;
unsigned int var_11 = 1569026152U;
unsigned int var_15 = 1370796420U;
int zero = 0;
unsigned int var_19 = 2305007232U;
unsigned int var_20 = 2843134410U;
unsigned int var_21 = 2435158998U;
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
