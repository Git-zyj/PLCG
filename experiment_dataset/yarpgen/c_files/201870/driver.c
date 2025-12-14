#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-23995;
unsigned short var_2 = (unsigned short)52587;
unsigned char var_4 = (unsigned char)246;
short var_8 = (short)-32133;
int var_12 = -1382186666;
long long int var_13 = 3470363824306302929LL;
int zero = 0;
unsigned int var_14 = 3405512849U;
short var_15 = (short)22051;
void init() {
}

void checksum() {
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
