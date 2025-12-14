#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-23;
signed char var_7 = (signed char)-90;
unsigned char var_10 = (unsigned char)175;
int var_14 = 547763033;
int zero = 0;
long long int var_20 = 2914350469167854786LL;
unsigned int var_21 = 1166488325U;
unsigned char var_22 = (unsigned char)65;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
