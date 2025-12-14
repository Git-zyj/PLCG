#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)35323;
unsigned short var_2 = (unsigned short)43227;
signed char var_4 = (signed char)-117;
unsigned char var_6 = (unsigned char)216;
int zero = 0;
unsigned char var_16 = (unsigned char)121;
unsigned char var_17 = (unsigned char)191;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
