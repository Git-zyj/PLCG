#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18273;
long long int var_1 = -7906334317299965237LL;
signed char var_4 = (signed char)-40;
long long int var_5 = -2030659020585824919LL;
short var_7 = (short)-23346;
signed char var_9 = (signed char)-113;
int zero = 0;
unsigned short var_11 = (unsigned short)20988;
short var_12 = (short)25699;
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
