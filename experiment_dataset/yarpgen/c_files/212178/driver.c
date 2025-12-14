#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)134;
unsigned short var_4 = (unsigned short)12779;
unsigned int var_7 = 2228428892U;
unsigned int var_11 = 2706600697U;
short var_13 = (short)16568;
int zero = 0;
signed char var_15 = (signed char)13;
unsigned short var_16 = (unsigned short)41411;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
