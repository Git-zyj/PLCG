#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 2185979733U;
_Bool var_13 = (_Bool)0;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned int var_20 = 4229704877U;
unsigned char var_21 = (unsigned char)18;
unsigned int var_22 = 2183810069U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
