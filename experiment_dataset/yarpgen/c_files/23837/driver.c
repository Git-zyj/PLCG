#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1603158645;
short var_3 = (short)-23789;
unsigned char var_5 = (unsigned char)110;
unsigned char var_9 = (unsigned char)15;
_Bool var_10 = (_Bool)1;
long long int var_11 = 6991686460518320915LL;
_Bool var_14 = (_Bool)1;
short var_15 = (short)24378;
unsigned short var_18 = (unsigned short)3939;
int zero = 0;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
