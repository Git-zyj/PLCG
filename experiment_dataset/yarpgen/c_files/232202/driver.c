#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_5 = -2247535153729040396LL;
unsigned char var_6 = (unsigned char)102;
unsigned int var_7 = 70189765U;
int var_9 = 1153390291;
unsigned long long int var_10 = 8598832660532183600ULL;
unsigned short var_12 = (unsigned short)46165;
int zero = 0;
short var_13 = (short)-8886;
int var_14 = 1656841424;
signed char var_15 = (signed char)8;
void init() {
}

void checksum() {
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
