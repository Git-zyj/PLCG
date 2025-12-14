#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 15253342973509045239ULL;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)0;
unsigned short var_11 = (unsigned short)39013;
int var_15 = -1287593934;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_19 = -5654205216820486307LL;
long long int var_20 = 8124157572267008869LL;
unsigned char var_21 = (unsigned char)174;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
