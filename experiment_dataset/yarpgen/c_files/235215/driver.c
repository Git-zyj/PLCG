#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -44306824;
int var_1 = -513891782;
unsigned int var_3 = 3630132354U;
long long int var_4 = -7036059155842722218LL;
short var_6 = (short)-7341;
unsigned char var_7 = (unsigned char)153;
int var_9 = 522579179;
long long int var_11 = 1998883012009491603LL;
long long int var_12 = 3018490633230710184LL;
int var_13 = 1563352778;
int zero = 0;
unsigned char var_15 = (unsigned char)120;
unsigned char var_16 = (unsigned char)123;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
