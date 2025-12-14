#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)92;
signed char var_5 = (signed char)-83;
long long int var_6 = -57232694114244351LL;
signed char var_10 = (signed char)72;
signed char var_12 = (signed char)96;
unsigned int var_14 = 3718926733U;
unsigned char var_15 = (unsigned char)133;
unsigned int var_16 = 537815816U;
signed char var_17 = (signed char)8;
int zero = 0;
int var_18 = 369098908;
unsigned int var_19 = 2113282474U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
