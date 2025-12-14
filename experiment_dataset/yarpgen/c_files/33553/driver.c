#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-94;
signed char var_8 = (signed char)-120;
int var_9 = 2050780179;
int var_10 = 57003237;
int zero = 0;
unsigned char var_12 = (unsigned char)13;
unsigned short var_13 = (unsigned short)3665;
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
