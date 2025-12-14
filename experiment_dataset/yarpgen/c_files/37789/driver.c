#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45157;
unsigned short var_1 = (unsigned short)26556;
unsigned short var_4 = (unsigned short)12743;
unsigned short var_5 = (unsigned short)52769;
unsigned short var_7 = (unsigned short)43801;
unsigned short var_8 = (unsigned short)24803;
unsigned short var_9 = (unsigned short)36241;
int zero = 0;
unsigned short var_10 = (unsigned short)63837;
unsigned short var_11 = (unsigned short)48226;
unsigned short var_12 = (unsigned short)31689;
unsigned short var_13 = (unsigned short)41926;
unsigned short var_14 = (unsigned short)7642;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
