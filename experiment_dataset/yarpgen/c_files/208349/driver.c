#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53667;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)46546;
unsigned char var_5 = (unsigned char)128;
signed char var_7 = (signed char)24;
int zero = 0;
unsigned short var_10 = (unsigned short)38669;
unsigned long long int var_11 = 6841135621801309766ULL;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
