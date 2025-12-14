#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1381323112;
unsigned long long int var_4 = 14852067841682180127ULL;
_Bool var_6 = (_Bool)1;
int var_8 = -1755698443;
unsigned short var_11 = (unsigned short)10406;
unsigned char var_13 = (unsigned char)203;
int zero = 0;
unsigned char var_14 = (unsigned char)4;
unsigned int var_15 = 2139355407U;
unsigned char var_16 = (unsigned char)184;
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
