#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4263860984U;
unsigned int var_4 = 3968398599U;
long long int var_8 = -3302843553008046780LL;
long long int var_10 = 2288989259666358776LL;
short var_19 = (short)-4230;
int zero = 0;
long long int var_20 = -5739084889810384906LL;
unsigned int var_21 = 1948374504U;
long long int var_22 = 9190864316467042865LL;
unsigned char var_23 = (unsigned char)138;
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
