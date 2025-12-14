#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 106723874U;
signed char var_18 = (signed char)-51;
int zero = 0;
unsigned char var_20 = (unsigned char)30;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)6;
unsigned long long int var_23 = 4036512800420853285ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
