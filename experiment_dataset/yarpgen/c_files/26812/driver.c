#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35167;
long long int var_2 = -4004859468143963085LL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_11 = 10418694137372343045ULL;
int zero = 0;
long long int var_13 = 4066085157539644630LL;
unsigned char var_14 = (unsigned char)239;
void init() {
}

void checksum() {
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
