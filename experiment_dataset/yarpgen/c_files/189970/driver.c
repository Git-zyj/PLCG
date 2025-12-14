#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -537235752;
unsigned int var_1 = 592304148U;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)54;
signed char var_14 = (signed char)35;
int zero = 0;
unsigned short var_20 = (unsigned short)35007;
unsigned short var_21 = (unsigned short)14704;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
