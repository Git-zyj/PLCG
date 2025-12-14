#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4059410392862150287LL;
unsigned short var_3 = (unsigned short)59780;
unsigned int var_7 = 1747553732U;
unsigned char var_9 = (unsigned char)97;
long long int var_11 = 3777519563002825117LL;
unsigned char var_12 = (unsigned char)53;
int zero = 0;
unsigned int var_13 = 2638987290U;
int var_14 = -686947120;
int var_15 = -987938983;
long long int var_16 = 3466829843681780835LL;
long long int var_17 = 2282674812209418168LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
