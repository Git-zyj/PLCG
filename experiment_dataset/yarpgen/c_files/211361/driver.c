#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)82;
long long int var_2 = -5149139369535535336LL;
signed char var_6 = (signed char)-23;
signed char var_7 = (signed char)39;
unsigned char var_11 = (unsigned char)165;
signed char var_13 = (signed char)-122;
int zero = 0;
unsigned char var_16 = (unsigned char)86;
int var_17 = -208413081;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
