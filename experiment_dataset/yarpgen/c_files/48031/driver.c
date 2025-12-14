#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23611;
_Bool var_2 = (_Bool)1;
unsigned int var_5 = 2055406411U;
signed char var_6 = (signed char)65;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)13068;
int zero = 0;
unsigned char var_10 = (unsigned char)51;
unsigned long long int var_11 = 17132520433989086805ULL;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
