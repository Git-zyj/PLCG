#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36289;
long long int var_1 = -8491856462210209894LL;
unsigned short var_2 = (unsigned short)50161;
unsigned int var_3 = 3354678353U;
unsigned long long int var_4 = 9321524960759338092ULL;
unsigned int var_6 = 2720800175U;
unsigned long long int var_7 = 9122149312425506743ULL;
unsigned char var_8 = (unsigned char)56;
int zero = 0;
int var_11 = -840794129;
int var_12 = 1309218696;
unsigned int var_13 = 1875814511U;
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
