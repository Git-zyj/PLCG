#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)95;
signed char var_2 = (signed char)70;
signed char var_6 = (signed char)-32;
unsigned int var_7 = 2875428947U;
short var_12 = (short)8774;
unsigned char var_13 = (unsigned char)147;
short var_14 = (short)22439;
long long int var_15 = 2237497751532658467LL;
int zero = 0;
signed char var_16 = (signed char)-19;
unsigned char var_17 = (unsigned char)28;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
