#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2778649638U;
unsigned short var_13 = (unsigned short)57262;
unsigned char var_15 = (unsigned char)76;
unsigned char var_16 = (unsigned char)96;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)200;
signed char var_21 = (signed char)116;
signed char var_22 = (signed char)-113;
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
