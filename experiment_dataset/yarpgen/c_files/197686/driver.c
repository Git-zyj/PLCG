#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1079569203177131282ULL;
unsigned int var_6 = 3918792582U;
unsigned short var_14 = (unsigned short)61907;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)8;
unsigned short var_22 = (unsigned short)55761;
void init() {
}

void checksum() {
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
