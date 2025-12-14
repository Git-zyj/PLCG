#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 9854306849888637057ULL;
long long int var_8 = -4985329059174348745LL;
unsigned short var_11 = (unsigned short)37077;
int zero = 0;
unsigned char var_12 = (unsigned char)132;
int var_13 = 934588209;
unsigned char var_14 = (unsigned char)154;
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
