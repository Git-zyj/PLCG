#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
long long int var_9 = -1324314174906973903LL;
unsigned int var_11 = 2167517409U;
unsigned int var_14 = 2327123856U;
int zero = 0;
unsigned char var_15 = (unsigned char)33;
unsigned long long int var_16 = 6153761440769868535ULL;
unsigned long long int var_17 = 8501090370475246788ULL;
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
