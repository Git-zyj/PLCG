#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6803293667611736071LL;
unsigned short var_5 = (unsigned short)17522;
unsigned short var_7 = (unsigned short)54862;
unsigned long long int var_9 = 7005900010703508342ULL;
int var_11 = 126546402;
short var_13 = (short)3608;
long long int var_14 = -4708450416899138259LL;
unsigned int var_16 = 2091214102U;
int zero = 0;
int var_18 = 1091259347;
unsigned char var_19 = (unsigned char)190;
short var_20 = (short)-18544;
void init() {
}

void checksum() {
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
