#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1580270325641503893LL;
unsigned char var_3 = (unsigned char)120;
unsigned int var_6 = 1053789117U;
unsigned char var_8 = (unsigned char)164;
unsigned short var_9 = (unsigned short)62646;
int zero = 0;
unsigned int var_11 = 3863914997U;
unsigned int var_12 = 1396784684U;
void init() {
}

void checksum() {
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
