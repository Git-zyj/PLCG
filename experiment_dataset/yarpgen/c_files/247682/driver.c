#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -317292077;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)-49;
unsigned char var_7 = (unsigned char)200;
signed char var_10 = (signed char)113;
signed char var_15 = (signed char)-98;
int zero = 0;
unsigned char var_16 = (unsigned char)73;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
