#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)72;
long long int var_2 = 5050390851390467902LL;
short var_3 = (short)-14442;
unsigned char var_5 = (unsigned char)132;
unsigned char var_6 = (unsigned char)72;
unsigned int var_8 = 241792707U;
int zero = 0;
unsigned short var_12 = (unsigned short)33783;
int var_13 = -546425165;
int var_14 = -1176583921;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
