#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-23;
short var_6 = (short)7326;
unsigned long long int var_9 = 2046014032187637924ULL;
short var_11 = (short)-22482;
unsigned long long int var_12 = 3831138120339399405ULL;
long long int var_14 = -6496725046248309262LL;
unsigned long long int var_15 = 8993469326290113913ULL;
int zero = 0;
long long int var_20 = 2889369425102018636LL;
unsigned int var_21 = 3603193523U;
void init() {
}

void checksum() {
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
