#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 4830521376528384691ULL;
unsigned long long int var_10 = 13920217157995977918ULL;
unsigned long long int var_12 = 9871802699267067877ULL;
int zero = 0;
signed char var_13 = (signed char)74;
int var_14 = 89582916;
int var_15 = 1370695690;
long long int var_16 = -2931888961170356803LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
