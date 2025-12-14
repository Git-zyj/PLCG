#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_3 = (unsigned char)71;
unsigned char var_4 = (unsigned char)200;
int var_6 = -1498712370;
unsigned char var_7 = (unsigned char)121;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)-34;
int zero = 0;
unsigned char var_11 = (unsigned char)245;
unsigned int var_12 = 1552804157U;
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
