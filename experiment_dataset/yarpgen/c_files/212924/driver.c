#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)117;
unsigned long long int var_3 = 4082557560619225909ULL;
_Bool var_5 = (_Bool)0;
long long int var_7 = -2113664120041783171LL;
unsigned char var_13 = (unsigned char)90;
int zero = 0;
unsigned char var_16 = (unsigned char)235;
unsigned char var_17 = (unsigned char)40;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
