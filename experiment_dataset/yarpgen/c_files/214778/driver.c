#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)47395;
unsigned long long int var_3 = 4044171635997077285ULL;
unsigned short var_6 = (unsigned short)1318;
signed char var_7 = (signed char)-4;
unsigned int var_9 = 575226885U;
unsigned short var_11 = (unsigned short)40745;
signed char var_12 = (signed char)42;
int zero = 0;
signed char var_14 = (signed char)-124;
unsigned int var_15 = 1031697623U;
long long int var_16 = 6556848071078424862LL;
unsigned long long int var_17 = 12985534935291279289ULL;
unsigned short var_18 = (unsigned short)40169;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
