#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_4 = 8007859002013726405LL;
signed char var_5 = (signed char)-22;
signed char var_6 = (signed char)71;
_Bool var_7 = (_Bool)1;
signed char var_10 = (signed char)-15;
int zero = 0;
signed char var_13 = (signed char)68;
signed char var_14 = (signed char)11;
unsigned short var_15 = (unsigned short)28062;
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
