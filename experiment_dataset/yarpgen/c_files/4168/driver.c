#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)64;
int var_2 = -893313280;
unsigned char var_9 = (unsigned char)95;
long long int var_10 = 6544024199779155262LL;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)0;
int zero = 0;
unsigned long long int var_14 = 662518611492018488ULL;
unsigned long long int var_15 = 10691222177402096159ULL;
unsigned short var_16 = (unsigned short)43416;
unsigned short var_17 = (unsigned short)4158;
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
