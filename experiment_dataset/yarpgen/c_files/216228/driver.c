#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1344807418U;
unsigned short var_1 = (unsigned short)54995;
unsigned int var_2 = 1468714262U;
int var_7 = -1642528638;
unsigned short var_8 = (unsigned short)57940;
unsigned char var_9 = (unsigned char)84;
unsigned int var_10 = 3774205855U;
unsigned short var_13 = (unsigned short)16513;
int zero = 0;
unsigned char var_14 = (unsigned char)200;
int var_15 = 1185069547;
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
