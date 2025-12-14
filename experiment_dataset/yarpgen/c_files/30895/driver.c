#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)69;
int var_1 = 793699543;
signed char var_4 = (signed char)-89;
short var_7 = (short)29037;
signed char var_8 = (signed char)-33;
short var_9 = (short)-2783;
signed char var_10 = (signed char)-13;
unsigned int var_11 = 3606370913U;
int zero = 0;
unsigned int var_12 = 4221657469U;
short var_13 = (short)27020;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
