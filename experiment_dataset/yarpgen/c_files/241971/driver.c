#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_11 = (signed char)-73;
_Bool var_13 = (_Bool)1;
unsigned char var_17 = (unsigned char)95;
int zero = 0;
long long int var_20 = 1595167992893974824LL;
unsigned short var_21 = (unsigned short)19669;
unsigned int var_22 = 2059095514U;
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
