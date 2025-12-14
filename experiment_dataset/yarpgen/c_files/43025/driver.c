#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2135202552017161213LL;
unsigned short var_6 = (unsigned short)46273;
signed char var_8 = (signed char)19;
unsigned char var_10 = (unsigned char)247;
unsigned int var_11 = 1613597792U;
unsigned char var_13 = (unsigned char)119;
int zero = 0;
unsigned short var_14 = (unsigned short)31153;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
