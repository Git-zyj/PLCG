#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)154;
signed char var_7 = (signed char)41;
unsigned char var_8 = (unsigned char)248;
int zero = 0;
unsigned char var_13 = (unsigned char)163;
long long int var_14 = 2866197141122216063LL;
unsigned char var_15 = (unsigned char)144;
signed char var_16 = (signed char)-22;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
