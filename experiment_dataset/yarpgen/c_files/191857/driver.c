#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11727;
signed char var_1 = (signed char)7;
unsigned short var_2 = (unsigned short)3685;
signed char var_3 = (signed char)38;
signed char var_5 = (signed char)-95;
unsigned int var_6 = 2335347362U;
signed char var_9 = (signed char)33;
int zero = 0;
signed char var_12 = (signed char)28;
unsigned long long int var_13 = 11987791156617078246ULL;
unsigned char var_14 = (unsigned char)163;
void init() {
}

void checksum() {
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
