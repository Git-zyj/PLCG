#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)134;
unsigned char var_2 = (unsigned char)78;
unsigned int var_4 = 3930129546U;
_Bool var_6 = (_Bool)1;
int zero = 0;
long long int var_12 = -1836310582865742639LL;
unsigned int var_13 = 1483883208U;
void init() {
}

void checksum() {
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
