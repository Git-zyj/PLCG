#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 706408714U;
long long int var_7 = -5825014751084544891LL;
_Bool var_11 = (_Bool)1;
unsigned long long int var_16 = 5359913575932185126ULL;
unsigned char var_17 = (unsigned char)86;
unsigned short var_18 = (unsigned short)52234;
int zero = 0;
unsigned char var_20 = (unsigned char)90;
short var_21 = (short)23592;
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
