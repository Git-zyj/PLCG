#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3218388498U;
unsigned short var_6 = (unsigned short)64109;
unsigned short var_8 = (unsigned short)29333;
_Bool var_12 = (_Bool)0;
unsigned short var_14 = (unsigned short)41483;
int zero = 0;
unsigned long long int var_17 = 12182852774823445431ULL;
unsigned short var_18 = (unsigned short)39793;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
