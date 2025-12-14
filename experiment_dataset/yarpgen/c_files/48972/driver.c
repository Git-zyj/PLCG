#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1117577848;
unsigned char var_2 = (unsigned char)148;
short var_10 = (short)15353;
signed char var_11 = (signed char)71;
int zero = 0;
unsigned int var_20 = 3590644017U;
unsigned long long int var_21 = 9743846099209274916ULL;
int var_22 = -231542955;
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
