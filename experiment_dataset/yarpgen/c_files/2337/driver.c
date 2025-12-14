#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43189;
short var_2 = (short)6873;
unsigned char var_4 = (unsigned char)107;
int var_7 = 1671060684;
short var_10 = (short)-8412;
unsigned short var_11 = (unsigned short)42565;
unsigned long long int var_13 = 16568023384527590302ULL;
int zero = 0;
long long int var_16 = -4625262067796413858LL;
long long int var_17 = 7802553608450403973LL;
int var_18 = 645363992;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
