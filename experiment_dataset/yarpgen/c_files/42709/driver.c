#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned int var_7 = 3734668244U;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)230;
unsigned int var_11 = 4097775605U;
long long int var_13 = -5388136193346112455LL;
int zero = 0;
unsigned char var_15 = (unsigned char)46;
unsigned long long int var_16 = 13728077301627598015ULL;
unsigned long long int var_17 = 13216011474441373506ULL;
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
