#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56340;
unsigned char var_1 = (unsigned char)72;
unsigned char var_5 = (unsigned char)234;
signed char var_10 = (signed char)-105;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)107;
unsigned short var_14 = (unsigned short)15670;
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
