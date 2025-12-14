#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1650493172239814165LL;
signed char var_8 = (signed char)105;
unsigned int var_11 = 1304407604U;
unsigned char var_12 = (unsigned char)102;
_Bool var_13 = (_Bool)0;
int zero = 0;
short var_18 = (short)27642;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 15837029370762935464ULL;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 15453724979926575515ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
