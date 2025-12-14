#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51146;
int var_2 = 1397547703;
_Bool var_4 = (_Bool)1;
unsigned int var_7 = 1585374577U;
signed char var_10 = (signed char)52;
int zero = 0;
unsigned short var_11 = (unsigned short)56000;
_Bool var_12 = (_Bool)0;
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
