#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_8 = (_Bool)0;
long long int var_11 = 7295584434606613100LL;
int var_17 = 1432762191;
int zero = 0;
signed char var_20 = (signed char)22;
unsigned char var_21 = (unsigned char)195;
unsigned short var_22 = (unsigned short)63322;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
