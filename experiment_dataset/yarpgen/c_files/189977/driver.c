#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2398128287962719035ULL;
unsigned char var_4 = (unsigned char)113;
unsigned short var_18 = (unsigned short)17920;
int zero = 0;
unsigned short var_20 = (unsigned short)33599;
int var_21 = 248353140;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
