#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)1;
unsigned char var_1 = (unsigned char)251;
unsigned char var_3 = (unsigned char)222;
unsigned char var_4 = (unsigned char)54;
unsigned char var_5 = (unsigned char)102;
unsigned char var_7 = (unsigned char)142;
unsigned char var_8 = (unsigned char)201;
unsigned char var_9 = (unsigned char)118;
unsigned char var_10 = (unsigned char)73;
unsigned char var_11 = (unsigned char)12;
unsigned char var_12 = (unsigned char)120;
unsigned char var_13 = (unsigned char)187;
unsigned char var_14 = (unsigned char)233;
int zero = 0;
unsigned char var_17 = (unsigned char)50;
unsigned char var_18 = (unsigned char)135;
unsigned char var_19 = (unsigned char)31;
unsigned char var_20 = (unsigned char)88;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
