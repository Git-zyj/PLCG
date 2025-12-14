#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1426194790;
int var_2 = 283000380;
long long int var_4 = 5635576326321552631LL;
unsigned short var_8 = (unsigned short)12619;
unsigned short var_9 = (unsigned short)26396;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)36380;
int zero = 0;
unsigned char var_12 = (unsigned char)20;
unsigned long long int var_13 = 2596147410054256800ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
