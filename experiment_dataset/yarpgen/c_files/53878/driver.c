#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32166;
unsigned char var_3 = (unsigned char)113;
unsigned short var_4 = (unsigned short)50820;
unsigned int var_6 = 3433746239U;
unsigned long long int var_7 = 9821436315231481222ULL;
unsigned long long int var_16 = 7788528392329948956ULL;
int zero = 0;
unsigned int var_20 = 503938877U;
short var_21 = (short)-29004;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
