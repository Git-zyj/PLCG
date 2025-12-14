#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)42911;
unsigned char var_2 = (unsigned char)215;
unsigned long long int var_3 = 2781228613279682870ULL;
long long int var_5 = -686161445041658068LL;
int var_6 = -292722199;
unsigned long long int var_9 = 10527260857992305834ULL;
int var_12 = 1776799288;
int zero = 0;
signed char var_13 = (signed char)-36;
short var_14 = (short)-25061;
signed char var_15 = (signed char)-43;
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
