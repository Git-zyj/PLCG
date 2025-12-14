#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13108;
unsigned long long int var_1 = 7132058113286069406ULL;
unsigned long long int var_2 = 18310845262710021176ULL;
short var_3 = (short)-27586;
short var_5 = (short)12365;
unsigned long long int var_6 = 11964661936658823480ULL;
int var_7 = -397484219;
unsigned long long int var_8 = 16342722243659113211ULL;
unsigned char var_10 = (unsigned char)38;
int zero = 0;
unsigned long long int var_12 = 11529318326996782887ULL;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)237;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
