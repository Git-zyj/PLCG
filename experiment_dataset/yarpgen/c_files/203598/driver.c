#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
signed char var_4 = (signed char)-93;
_Bool var_6 = (_Bool)0;
_Bool var_14 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)-123;
unsigned short var_20 = (unsigned short)33463;
signed char var_21 = (signed char)107;
signed char var_22 = (signed char)-15;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
