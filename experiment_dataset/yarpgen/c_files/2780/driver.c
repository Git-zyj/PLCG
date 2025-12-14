#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)120;
unsigned char var_2 = (unsigned char)170;
long long int var_3 = 1922219741922692546LL;
signed char var_5 = (signed char)-116;
unsigned int var_7 = 1496030261U;
int zero = 0;
unsigned int var_17 = 2053957240U;
signed char var_18 = (signed char)12;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
