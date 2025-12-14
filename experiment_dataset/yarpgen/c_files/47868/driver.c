#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5324;
unsigned char var_1 = (unsigned char)226;
signed char var_2 = (signed char)-86;
_Bool var_4 = (_Bool)1;
long long int var_8 = 2747051124921073527LL;
int var_10 = -266028955;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)53114;
unsigned int var_13 = 3576192225U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
