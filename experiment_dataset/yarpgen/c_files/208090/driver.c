#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2648887057U;
long long int var_7 = 8459362458624274930LL;
signed char var_10 = (signed char)10;
signed char var_14 = (signed char)127;
unsigned int var_18 = 1088806579U;
int zero = 0;
unsigned char var_20 = (unsigned char)164;
unsigned char var_21 = (unsigned char)14;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
