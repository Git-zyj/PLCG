#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-82;
signed char var_5 = (signed char)12;
signed char var_11 = (signed char)2;
long long int var_12 = -6170089321073375247LL;
signed char var_14 = (signed char)-103;
int zero = 0;
unsigned short var_20 = (unsigned short)46415;
signed char var_21 = (signed char)-28;
signed char var_22 = (signed char)48;
signed char var_23 = (signed char)16;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
