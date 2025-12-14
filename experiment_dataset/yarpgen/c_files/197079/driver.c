#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)162;
unsigned char var_1 = (unsigned char)3;
long long int var_3 = -2021510759132787632LL;
long long int var_6 = -7661900900075847404LL;
int zero = 0;
unsigned char var_10 = (unsigned char)249;
unsigned char var_11 = (unsigned char)52;
long long int var_12 = 121686518445305859LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
