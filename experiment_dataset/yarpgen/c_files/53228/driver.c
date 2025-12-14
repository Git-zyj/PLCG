#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)16284;
long long int var_5 = 4610002261608797844LL;
long long int var_6 = -139316594302361210LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned char var_12 = (unsigned char)26;
unsigned int var_13 = 3319123766U;
unsigned char var_14 = (unsigned char)13;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
