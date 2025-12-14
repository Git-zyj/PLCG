#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36698;
short var_5 = (short)-5548;
unsigned char var_11 = (unsigned char)175;
unsigned long long int var_12 = 4673746918278137726ULL;
unsigned char var_13 = (unsigned char)135;
short var_14 = (short)-7058;
int zero = 0;
unsigned short var_15 = (unsigned short)35735;
long long int var_16 = -1167025870739124866LL;
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
