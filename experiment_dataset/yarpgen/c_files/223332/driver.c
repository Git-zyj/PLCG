#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3576195951161556992LL;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)17336;
int var_7 = -466588869;
int zero = 0;
int var_15 = 202797600;
unsigned long long int var_16 = 14526264378619866825ULL;
unsigned int var_17 = 3379509294U;
unsigned char var_18 = (unsigned char)54;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
