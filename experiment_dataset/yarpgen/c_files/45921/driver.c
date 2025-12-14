#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)108;
short var_3 = (short)28858;
short var_4 = (short)17267;
int var_7 = -1556675169;
unsigned short var_8 = (unsigned short)22867;
unsigned char var_9 = (unsigned char)18;
unsigned int var_13 = 2987795589U;
int zero = 0;
short var_14 = (short)15546;
long long int var_15 = -8055914860832006553LL;
unsigned char var_16 = (unsigned char)201;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
