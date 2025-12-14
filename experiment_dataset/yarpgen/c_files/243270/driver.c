#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3503931859U;
long long int var_5 = -1946387191541579273LL;
unsigned int var_7 = 2492479120U;
unsigned char var_11 = (unsigned char)251;
int zero = 0;
int var_20 = 7109120;
signed char var_21 = (signed char)17;
unsigned int var_22 = 2846562609U;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
