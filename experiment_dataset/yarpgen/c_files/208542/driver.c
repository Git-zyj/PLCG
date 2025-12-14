#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)20;
int var_16 = -1086851640;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned int var_20 = 3870346535U;
signed char var_21 = (signed char)13;
unsigned short var_22 = (unsigned short)24247;
unsigned char var_23 = (unsigned char)27;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
