#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-97;
long long int var_1 = -3230342086374295665LL;
unsigned int var_8 = 497153695U;
unsigned int var_11 = 4090953411U;
signed char var_18 = (signed char)30;
int zero = 0;
signed char var_20 = (signed char)6;
signed char var_21 = (signed char)-98;
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
