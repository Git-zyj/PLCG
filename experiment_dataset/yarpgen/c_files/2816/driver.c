#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 83821617367367402LL;
unsigned short var_6 = (unsigned short)28325;
unsigned char var_8 = (unsigned char)125;
unsigned short var_12 = (unsigned short)3409;
int zero = 0;
unsigned short var_14 = (unsigned short)6013;
unsigned long long int var_15 = 8107731825953002574ULL;
void init() {
}

void checksum() {
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
