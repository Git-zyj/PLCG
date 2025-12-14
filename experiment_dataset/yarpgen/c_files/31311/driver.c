#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-56;
unsigned short var_5 = (unsigned short)13701;
signed char var_8 = (signed char)98;
unsigned char var_10 = (unsigned char)49;
unsigned long long int var_11 = 1958465898907600838ULL;
int zero = 0;
signed char var_15 = (signed char)-122;
unsigned short var_16 = (unsigned short)14334;
unsigned short var_17 = (unsigned short)50654;
unsigned char var_18 = (unsigned char)98;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
