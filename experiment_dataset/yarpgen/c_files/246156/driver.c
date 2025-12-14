#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32640;
unsigned long long int var_3 = 13839628894623516671ULL;
unsigned short var_4 = (unsigned short)52180;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned char var_11 = (unsigned char)147;
unsigned short var_12 = (unsigned short)12515;
void init() {
}

void checksum() {
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
