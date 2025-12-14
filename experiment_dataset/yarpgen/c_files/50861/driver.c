#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
unsigned short var_12 = (unsigned short)49133;
_Bool var_16 = (_Bool)0;
unsigned char var_19 = (unsigned char)83;
int zero = 0;
signed char var_20 = (signed char)38;
signed char var_21 = (signed char)-88;
unsigned short var_22 = (unsigned short)8052;
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
