#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)215;
unsigned int var_7 = 4130160177U;
unsigned long long int var_13 = 1924057870091549000ULL;
_Bool var_14 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)-8;
int var_21 = 88037317;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
