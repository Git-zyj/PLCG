#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)48174;
unsigned short var_4 = (unsigned short)42478;
unsigned short var_7 = (unsigned short)36403;
unsigned short var_8 = (unsigned short)41803;
unsigned char var_9 = (unsigned char)205;
long long int var_10 = -850516856652699376LL;
unsigned short var_12 = (unsigned short)49789;
long long int var_13 = -4840057874072410948LL;
long long int var_16 = -2521518492630380417LL;
long long int var_18 = 6398301852166824196LL;
int zero = 0;
unsigned char var_20 = (unsigned char)132;
long long int var_21 = 3887840631455101561LL;
unsigned char var_22 = (unsigned char)76;
unsigned short var_23 = (unsigned short)51060;
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
