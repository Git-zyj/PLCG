#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)13859;
unsigned int var_7 = 2290537160U;
unsigned int var_10 = 316977577U;
unsigned short var_17 = (unsigned short)54047;
int zero = 0;
unsigned short var_19 = (unsigned short)3259;
unsigned short var_20 = (unsigned short)54959;
unsigned int var_21 = 3442744405U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
