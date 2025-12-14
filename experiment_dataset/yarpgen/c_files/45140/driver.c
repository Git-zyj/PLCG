#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)204;
unsigned char var_7 = (unsigned char)80;
signed char var_10 = (signed char)27;
long long int var_15 = 17721195891407070LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)54;
unsigned char var_19 = (unsigned char)37;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
