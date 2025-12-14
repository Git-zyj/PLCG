#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_3 = (short)-19590;
_Bool var_8 = (_Bool)0;
unsigned short var_12 = (unsigned short)36530;
int zero = 0;
long long int var_20 = 2707540466460580862LL;
unsigned short var_21 = (unsigned short)953;
short var_22 = (short)-15214;
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
