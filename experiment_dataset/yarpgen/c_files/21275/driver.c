#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)-102;
unsigned long long int var_6 = 710797460598495169ULL;
unsigned long long int var_10 = 3227393735924731973ULL;
unsigned long long int var_11 = 8477791449643944418ULL;
long long int var_12 = 3566920536181626915LL;
int zero = 0;
unsigned short var_14 = (unsigned short)2185;
signed char var_15 = (signed char)13;
void init() {
}

void checksum() {
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
