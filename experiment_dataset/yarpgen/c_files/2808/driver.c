#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)49;
unsigned char var_1 = (unsigned char)163;
unsigned char var_3 = (unsigned char)228;
unsigned char var_7 = (unsigned char)10;
int var_8 = -260727292;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 1374289801U;
signed char var_15 = (signed char)122;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
