#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)227;
_Bool var_3 = (_Bool)0;
short var_5 = (short)1725;
unsigned long long int var_7 = 3357319829766935663ULL;
short var_17 = (short)6939;
int zero = 0;
unsigned long long int var_20 = 923171323908306020ULL;
signed char var_21 = (signed char)-21;
_Bool var_22 = (_Bool)1;
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
