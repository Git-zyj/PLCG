#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6212;
int var_3 = 1485151804;
unsigned char var_4 = (unsigned char)111;
unsigned long long int var_8 = 15772231280701954156ULL;
unsigned short var_10 = (unsigned short)10119;
int zero = 0;
unsigned short var_13 = (unsigned short)39489;
unsigned long long int var_14 = 12050200367671547948ULL;
unsigned long long int var_15 = 14779951191619468293ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
