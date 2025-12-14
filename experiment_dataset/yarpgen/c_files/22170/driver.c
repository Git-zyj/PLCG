#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3124;
unsigned char var_6 = (unsigned char)171;
unsigned char var_7 = (unsigned char)31;
unsigned char var_8 = (unsigned char)107;
int zero = 0;
long long int var_10 = -709325112457384947LL;
unsigned short var_11 = (unsigned short)42816;
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
