#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)97;
short var_5 = (short)24230;
unsigned long long int var_6 = 8024328199218183904ULL;
long long int var_7 = -505656479649791474LL;
unsigned long long int var_10 = 9317078209410711391ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)25276;
unsigned int var_12 = 1493029339U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
