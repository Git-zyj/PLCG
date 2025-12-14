#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)10343;
signed char var_11 = (signed char)-24;
_Bool var_12 = (_Bool)1;
int var_13 = 902490153;
int zero = 0;
unsigned int var_14 = 730680251U;
unsigned short var_15 = (unsigned short)12691;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
