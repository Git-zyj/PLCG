#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1492119160;
unsigned long long int var_4 = 17749943232585837848ULL;
unsigned char var_6 = (unsigned char)14;
int zero = 0;
unsigned long long int var_10 = 2196970260669383089ULL;
unsigned char var_11 = (unsigned char)243;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
