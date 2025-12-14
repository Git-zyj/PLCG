#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1922053852;
int var_3 = 1152896703;
int var_6 = -1359539176;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)2549;
int zero = 0;
unsigned short var_16 = (unsigned short)24105;
unsigned long long int var_17 = 9143448597282571683ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
