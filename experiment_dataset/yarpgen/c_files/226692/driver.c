#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)121;
unsigned short var_2 = (unsigned short)56928;
long long int var_3 = 1317076305058041832LL;
unsigned short var_5 = (unsigned short)50814;
unsigned int var_16 = 2465782901U;
int zero = 0;
unsigned char var_17 = (unsigned char)217;
unsigned char var_18 = (unsigned char)221;
void init() {
}

void checksum() {
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
