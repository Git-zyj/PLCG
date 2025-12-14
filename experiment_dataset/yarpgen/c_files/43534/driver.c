#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)228;
unsigned short var_3 = (unsigned short)50838;
unsigned short var_4 = (unsigned short)42990;
unsigned char var_7 = (unsigned char)236;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-14137;
unsigned short var_12 = (unsigned short)39067;
int zero = 0;
long long int var_13 = 4892255472188100316LL;
unsigned short var_14 = (unsigned short)19537;
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
