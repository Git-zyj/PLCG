#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18423;
signed char var_1 = (signed char)62;
int var_4 = 96244414;
signed char var_8 = (signed char)65;
unsigned short var_9 = (unsigned short)37097;
int zero = 0;
signed char var_10 = (signed char)118;
unsigned long long int var_11 = 3079254000095880368ULL;
unsigned short var_12 = (unsigned short)54019;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
