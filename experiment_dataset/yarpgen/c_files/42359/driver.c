#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_3 = (unsigned short)57122;
_Bool var_4 = (_Bool)1;
unsigned char var_8 = (unsigned char)176;
int zero = 0;
unsigned char var_11 = (unsigned char)139;
unsigned int var_12 = 3321476703U;
unsigned long long int var_13 = 9788627410528983895ULL;
unsigned char var_14 = (unsigned char)134;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
