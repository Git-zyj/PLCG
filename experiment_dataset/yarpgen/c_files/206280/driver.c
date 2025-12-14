#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1836989123;
unsigned char var_8 = (unsigned char)207;
unsigned char var_9 = (unsigned char)29;
int zero = 0;
unsigned char var_13 = (unsigned char)137;
unsigned short var_14 = (unsigned short)36664;
unsigned long long int var_15 = 1783472875529025308ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
