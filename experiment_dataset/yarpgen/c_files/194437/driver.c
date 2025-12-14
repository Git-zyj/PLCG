#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)54872;
signed char var_4 = (signed char)42;
long long int var_6 = 1179581661841729026LL;
unsigned int var_7 = 2825910528U;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 1632904612U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
