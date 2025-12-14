#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -566410639;
int var_2 = 657205692;
signed char var_4 = (signed char)124;
int var_5 = -1120001387;
signed char var_6 = (signed char)0;
int var_7 = 2117917653;
signed char var_9 = (signed char)54;
int zero = 0;
signed char var_10 = (signed char)-60;
int var_11 = -1424553644;
signed char var_12 = (signed char)-71;
int var_13 = -1029216099;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
