#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12826;
unsigned int var_1 = 3183929308U;
int var_5 = 747312193;
int var_8 = 1620459374;
unsigned int var_9 = 4252474203U;
signed char var_14 = (signed char)-28;
int zero = 0;
int var_16 = 324612674;
int var_17 = -1119017082;
long long int var_18 = 5741611878575905532LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
