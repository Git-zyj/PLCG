#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7965356171284884391LL;
unsigned short var_3 = (unsigned short)52608;
unsigned int var_7 = 1465628442U;
unsigned char var_8 = (unsigned char)33;
unsigned int var_10 = 513447282U;
int zero = 0;
unsigned char var_13 = (unsigned char)99;
unsigned char var_14 = (unsigned char)84;
long long int var_15 = -1390941884227931518LL;
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
