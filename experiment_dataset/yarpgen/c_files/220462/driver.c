#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1628041722U;
unsigned int var_9 = 569929509U;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned int var_12 = 2275317427U;
unsigned short var_13 = (unsigned short)2234;
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
