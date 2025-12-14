#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8311280035997904311LL;
unsigned char var_3 = (unsigned char)34;
unsigned int var_5 = 860970918U;
int zero = 0;
long long int var_11 = -286891954287539287LL;
unsigned short var_12 = (unsigned short)34767;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
