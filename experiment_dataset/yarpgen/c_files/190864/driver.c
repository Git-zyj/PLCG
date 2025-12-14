#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39088;
unsigned char var_1 = (unsigned char)171;
signed char var_2 = (signed char)-118;
unsigned int var_5 = 3670955127U;
_Bool var_7 = (_Bool)1;
unsigned char var_14 = (unsigned char)54;
signed char var_16 = (signed char)12;
int zero = 0;
unsigned int var_17 = 3571346252U;
long long int var_18 = -8840322662785085129LL;
void init() {
}

void checksum() {
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
