#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)871;
unsigned short var_1 = (unsigned short)61371;
signed char var_2 = (signed char)-78;
unsigned short var_4 = (unsigned short)56984;
long long int var_5 = -7800765289737229203LL;
unsigned long long int var_6 = 6890186831717911139ULL;
unsigned char var_9 = (unsigned char)232;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_11 = 9678957944666810542ULL;
unsigned short var_12 = (unsigned short)9713;
void init() {
}

void checksum() {
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
