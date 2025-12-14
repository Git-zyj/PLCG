#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1613168647;
unsigned int var_3 = 2147563483U;
unsigned long long int var_4 = 12368510118023178859ULL;
int var_6 = 987038881;
unsigned char var_8 = (unsigned char)177;
unsigned int var_9 = 3930718978U;
int zero = 0;
unsigned short var_12 = (unsigned short)17216;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)41062;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
