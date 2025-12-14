#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)137;
unsigned char var_3 = (unsigned char)112;
unsigned short var_4 = (unsigned short)23230;
int var_6 = -1424458248;
unsigned char var_8 = (unsigned char)196;
int zero = 0;
unsigned long long int var_10 = 8473749662445992315ULL;
unsigned short var_11 = (unsigned short)28855;
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
