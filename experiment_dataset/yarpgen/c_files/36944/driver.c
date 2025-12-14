#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3883172583505750787LL;
long long int var_10 = -2135000658895124633LL;
unsigned long long int var_12 = 5199963035974396270ULL;
_Bool var_13 = (_Bool)0;
unsigned int var_15 = 1024794675U;
unsigned char var_16 = (unsigned char)71;
int zero = 0;
unsigned char var_17 = (unsigned char)205;
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
