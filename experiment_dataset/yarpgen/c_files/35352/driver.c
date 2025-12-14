#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)6;
long long int var_4 = -1791668026269125780LL;
_Bool var_5 = (_Bool)0;
unsigned char var_12 = (unsigned char)247;
int zero = 0;
signed char var_13 = (signed char)5;
long long int var_14 = -604010984973561873LL;
unsigned char var_15 = (unsigned char)32;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
