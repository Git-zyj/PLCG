#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)62184;
unsigned long long int var_4 = 154584235151877945ULL;
_Bool var_5 = (_Bool)1;
int var_10 = 1232810570;
int zero = 0;
unsigned char var_11 = (unsigned char)239;
unsigned long long int var_12 = 18217133495047051693ULL;
signed char var_13 = (signed char)33;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
