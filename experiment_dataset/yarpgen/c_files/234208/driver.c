#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51628;
signed char var_2 = (signed char)116;
long long int var_3 = 702895007609473757LL;
unsigned short var_5 = (unsigned short)49172;
unsigned char var_8 = (unsigned char)246;
int zero = 0;
short var_10 = (short)4517;
int var_11 = 37037947;
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
