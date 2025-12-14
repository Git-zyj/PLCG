#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5635553357316187997LL;
signed char var_3 = (signed char)-52;
unsigned int var_4 = 3864789296U;
unsigned int var_5 = 3362473881U;
unsigned short var_8 = (unsigned short)38782;
int zero = 0;
unsigned long long int var_11 = 15722070389797973053ULL;
unsigned short var_12 = (unsigned short)24845;
unsigned int var_13 = 2418494718U;
_Bool var_14 = (_Bool)0;
long long int var_15 = -7202789475846282208LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
