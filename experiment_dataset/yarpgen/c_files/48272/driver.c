#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 882054190U;
unsigned char var_1 = (unsigned char)36;
_Bool var_6 = (_Bool)0;
_Bool var_11 = (_Bool)1;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_20 = 2691809578U;
unsigned char var_21 = (unsigned char)26;
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
