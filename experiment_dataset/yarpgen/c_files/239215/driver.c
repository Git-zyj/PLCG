#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 9081290226192968004LL;
unsigned long long int var_6 = 12196639354715294144ULL;
unsigned char var_8 = (unsigned char)132;
unsigned int var_9 = 4021680119U;
int zero = 0;
unsigned char var_11 = (unsigned char)164;
_Bool var_12 = (_Bool)0;
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
