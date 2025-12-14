#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3801;
unsigned long long int var_5 = 13735129356191944650ULL;
unsigned char var_6 = (unsigned char)191;
_Bool var_9 = (_Bool)0;
int zero = 0;
int var_10 = -238592056;
long long int var_11 = -9125576485876890587LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
