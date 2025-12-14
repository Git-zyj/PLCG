#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)126;
_Bool var_3 = (_Bool)1;
unsigned short var_7 = (unsigned short)37300;
int var_8 = 541293949;
int zero = 0;
unsigned int var_15 = 1956587964U;
unsigned char var_16 = (unsigned char)185;
short var_17 = (short)-27763;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
