#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)16;
unsigned short var_4 = (unsigned short)40524;
int var_8 = 301735973;
unsigned short var_11 = (unsigned short)28974;
int zero = 0;
unsigned char var_13 = (unsigned char)164;
int var_14 = -369934719;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
