#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)3900;
unsigned char var_8 = (unsigned char)167;
short var_10 = (short)-19921;
long long int var_11 = -1408799285425935929LL;
unsigned short var_13 = (unsigned short)5289;
int zero = 0;
short var_14 = (short)24737;
short var_15 = (short)8051;
short var_16 = (short)-21954;
unsigned char var_17 = (unsigned char)169;
int var_18 = -1470780288;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
