#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-79;
unsigned char var_8 = (unsigned char)189;
int var_10 = 1277696093;
_Bool var_16 = (_Bool)1;
int zero = 0;
int var_18 = -1513083531;
signed char var_19 = (signed char)119;
unsigned int var_20 = 891152044U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
