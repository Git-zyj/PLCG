#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)31594;
short var_2 = (short)29894;
unsigned long long int var_3 = 3449887893399824390ULL;
int var_4 = -1276279986;
unsigned long long int var_5 = 8756768817044889729ULL;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 3111963352U;
short var_12 = (short)26752;
unsigned short var_13 = (unsigned short)43943;
int zero = 0;
unsigned short var_15 = (unsigned short)57193;
signed char var_16 = (signed char)61;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
