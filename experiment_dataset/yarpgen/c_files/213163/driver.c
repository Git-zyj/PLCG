#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6788834416180012402LL;
long long int var_1 = -6130857512395419567LL;
long long int var_8 = 6774689533237756080LL;
unsigned char var_9 = (unsigned char)151;
int zero = 0;
unsigned short var_17 = (unsigned short)37237;
int var_18 = -497039380;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
