#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5836419369094050627LL;
signed char var_1 = (signed char)92;
signed char var_2 = (signed char)-83;
unsigned int var_3 = 45619534U;
unsigned char var_6 = (unsigned char)170;
short var_8 = (short)-14675;
int zero = 0;
unsigned int var_13 = 3837810081U;
unsigned short var_14 = (unsigned short)2927;
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
