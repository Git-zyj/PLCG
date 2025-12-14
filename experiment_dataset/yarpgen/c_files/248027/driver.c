#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1993792603929521112LL;
int zero = 0;
unsigned char var_20 = (unsigned char)158;
signed char var_21 = (signed char)-79;
signed char var_22 = (signed char)113;
_Bool var_23 = (_Bool)1;
signed char var_24 = (signed char)70;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
