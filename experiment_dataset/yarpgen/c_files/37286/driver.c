#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 675715425U;
_Bool var_7 = (_Bool)1;
unsigned char var_11 = (unsigned char)24;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 1951743003U;
unsigned char var_14 = (unsigned char)133;
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
