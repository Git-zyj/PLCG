#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12914172041803559261ULL;
int var_3 = -1600146881;
_Bool var_4 = (_Bool)1;
unsigned char var_8 = (unsigned char)107;
unsigned long long int var_12 = 10612662669743897360ULL;
unsigned short var_16 = (unsigned short)50699;
int zero = 0;
signed char var_17 = (signed char)28;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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
