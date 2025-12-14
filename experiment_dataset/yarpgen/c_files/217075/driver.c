#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29291;
unsigned short var_2 = (unsigned short)63250;
int var_3 = -483461821;
int var_4 = 967391311;
unsigned long long int var_6 = 10366190028132148551ULL;
long long int var_7 = -8926275162070619325LL;
long long int var_9 = 7885408744014305468LL;
_Bool var_10 = (_Bool)1;
unsigned char var_12 = (unsigned char)21;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = -1738808486;
int var_16 = -1567413647;
unsigned char var_17 = (unsigned char)255;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
