#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1922057105;
signed char var_2 = (signed char)42;
_Bool var_3 = (_Bool)0;
unsigned short var_7 = (unsigned short)32169;
unsigned int var_11 = 1384975956U;
unsigned int var_13 = 4199310173U;
int zero = 0;
unsigned int var_14 = 3967539610U;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
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
