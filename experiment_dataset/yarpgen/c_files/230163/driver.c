#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9206;
unsigned char var_1 = (unsigned char)73;
long long int var_3 = 5713688660849209396LL;
short var_8 = (short)20801;
unsigned long long int var_13 = 14560236419591796843ULL;
int zero = 0;
unsigned long long int var_14 = 4568773007854936364ULL;
unsigned char var_15 = (unsigned char)65;
unsigned char var_16 = (unsigned char)149;
unsigned char var_17 = (unsigned char)126;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
