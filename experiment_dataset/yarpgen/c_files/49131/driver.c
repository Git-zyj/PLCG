#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 4680326355231785346ULL;
unsigned int var_6 = 231029583U;
unsigned char var_15 = (unsigned char)203;
int zero = 0;
int var_20 = -1501398347;
long long int var_21 = 7317432990501014083LL;
unsigned short var_22 = (unsigned short)10588;
unsigned char var_23 = (unsigned char)166;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
