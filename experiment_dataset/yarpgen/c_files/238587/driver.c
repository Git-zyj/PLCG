#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1482523769;
int var_2 = -1218044780;
unsigned char var_3 = (unsigned char)229;
unsigned int var_4 = 3963339290U;
long long int var_5 = -4690875793175649688LL;
_Bool var_7 = (_Bool)1;
int zero = 0;
unsigned char var_12 = (unsigned char)7;
unsigned char var_13 = (unsigned char)64;
unsigned char var_14 = (unsigned char)249;
unsigned short var_15 = (unsigned short)63250;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
