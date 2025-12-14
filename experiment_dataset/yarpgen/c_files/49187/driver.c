#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)65414;
long long int var_4 = 2424757900758689747LL;
_Bool var_5 = (_Bool)0;
unsigned char var_7 = (unsigned char)7;
unsigned int var_8 = 1150246747U;
unsigned char var_9 = (unsigned char)131;
_Bool var_12 = (_Bool)1;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 75180817U;
int var_16 = 1868974250;
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
