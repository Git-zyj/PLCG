#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7953291544465632466ULL;
int var_2 = -1095577710;
unsigned long long int var_6 = 9545067281849249274ULL;
signed char var_7 = (signed char)24;
unsigned int var_9 = 1491050073U;
signed char var_11 = (signed char)-23;
short var_12 = (short)-32264;
signed char var_14 = (signed char)-53;
unsigned int var_17 = 2377282625U;
int zero = 0;
signed char var_20 = (signed char)92;
long long int var_21 = -4232639053823212457LL;
signed char var_22 = (signed char)45;
short var_23 = (short)-2381;
short var_24 = (short)-26915;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
