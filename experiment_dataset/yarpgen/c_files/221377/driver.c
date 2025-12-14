#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10481158421399097188ULL;
signed char var_4 = (signed char)124;
int var_5 = -1586556887;
unsigned short var_8 = (unsigned short)6054;
unsigned long long int var_15 = 8133479365269247913ULL;
short var_17 = (short)-6021;
unsigned short var_19 = (unsigned short)10127;
int zero = 0;
unsigned short var_20 = (unsigned short)61444;
long long int var_21 = 8229478877075014283LL;
int var_22 = 639181022;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
