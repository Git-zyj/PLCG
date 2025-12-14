#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)15879;
signed char var_5 = (signed char)45;
signed char var_6 = (signed char)-127;
short var_10 = (short)4301;
int zero = 0;
signed char var_11 = (signed char)0;
unsigned long long int var_12 = 8503820747302426889ULL;
void init() {
}

void checksum() {
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
