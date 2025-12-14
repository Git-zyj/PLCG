#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-60;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
signed char var_10 = (signed char)-98;
_Bool var_11 = (_Bool)1;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)52;
int zero = 0;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
