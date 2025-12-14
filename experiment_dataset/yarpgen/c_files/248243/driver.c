#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)7997;
unsigned char var_5 = (unsigned char)137;
unsigned long long int var_9 = 13111414181915810357ULL;
unsigned int var_12 = 1815051366U;
unsigned short var_14 = (unsigned short)31589;
int zero = 0;
unsigned long long int var_15 = 17753306303803660549ULL;
unsigned long long int var_16 = 3322964380989141772ULL;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)192;
void init() {
}

void checksum() {
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
