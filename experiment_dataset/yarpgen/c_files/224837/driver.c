#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)255;
unsigned char var_8 = (unsigned char)37;
int var_10 = -977881368;
unsigned short var_11 = (unsigned short)43418;
int zero = 0;
unsigned char var_12 = (unsigned char)127;
unsigned char var_13 = (unsigned char)35;
unsigned int var_14 = 2539613943U;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
