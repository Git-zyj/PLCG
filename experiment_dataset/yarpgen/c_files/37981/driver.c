#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)62591;
unsigned char var_2 = (unsigned char)207;
unsigned char var_3 = (unsigned char)105;
unsigned short var_5 = (unsigned short)18740;
unsigned char var_6 = (unsigned char)252;
unsigned int var_7 = 2240284589U;
unsigned short var_10 = (unsigned short)17057;
unsigned short var_14 = (unsigned short)57268;
int zero = 0;
unsigned int var_15 = 2940118309U;
long long int var_16 = 12952325139755223LL;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 1582883506U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
