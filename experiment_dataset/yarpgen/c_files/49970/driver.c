#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)239;
unsigned int var_3 = 1166538318U;
long long int var_7 = -3990949114063134275LL;
int var_15 = -749235650;
int var_16 = -4108216;
_Bool var_17 = (_Bool)0;
unsigned short var_19 = (unsigned short)65169;
int zero = 0;
unsigned short var_20 = (unsigned short)64741;
unsigned long long int var_21 = 6727043074204852390ULL;
void init() {
}

void checksum() {
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
