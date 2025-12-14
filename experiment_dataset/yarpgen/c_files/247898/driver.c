#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17828857541225121590ULL;
unsigned char var_2 = (unsigned char)178;
unsigned short var_4 = (unsigned short)54376;
unsigned char var_5 = (unsigned char)207;
unsigned int var_6 = 238142888U;
int var_7 = -886790592;
unsigned char var_10 = (unsigned char)228;
int zero = 0;
unsigned short var_11 = (unsigned short)29347;
unsigned int var_12 = 323347543U;
short var_13 = (short)-32156;
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
