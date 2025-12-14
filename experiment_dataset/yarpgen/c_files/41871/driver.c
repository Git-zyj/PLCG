#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)28;
unsigned short var_1 = (unsigned short)16193;
unsigned short var_2 = (unsigned short)8946;
unsigned short var_3 = (unsigned short)18883;
unsigned short var_4 = (unsigned short)50929;
unsigned short var_5 = (unsigned short)54302;
unsigned short var_6 = (unsigned short)62714;
unsigned short var_7 = (unsigned short)38793;
unsigned short var_9 = (unsigned short)2474;
int zero = 0;
unsigned short var_10 = (unsigned short)6744;
unsigned short var_11 = (unsigned short)54139;
unsigned char var_12 = (unsigned char)18;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
