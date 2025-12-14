#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)2275;
signed char var_10 = (signed char)64;
int var_17 = 294516164;
signed char var_18 = (signed char)-89;
unsigned char var_19 = (unsigned char)210;
int zero = 0;
unsigned int var_20 = 3100069346U;
long long int var_21 = 8438528617123850030LL;
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
