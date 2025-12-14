#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2945262219U;
unsigned short var_1 = (unsigned short)54587;
signed char var_3 = (signed char)-28;
int var_4 = -1498539976;
signed char var_5 = (signed char)64;
unsigned char var_8 = (unsigned char)247;
int zero = 0;
unsigned int var_12 = 2044953923U;
unsigned int var_13 = 4102668788U;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
