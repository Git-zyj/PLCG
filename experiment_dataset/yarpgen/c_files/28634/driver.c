#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)126;
long long int var_3 = -4991889393703013292LL;
unsigned char var_5 = (unsigned char)10;
unsigned long long int var_6 = 2329937329219440028ULL;
long long int var_7 = -6369281200690262071LL;
long long int var_8 = 5251666794463338765LL;
int var_9 = 2113989942;
int zero = 0;
unsigned long long int var_10 = 1280756190222255283ULL;
int var_11 = 336938068;
unsigned long long int var_12 = 14356475310015175533ULL;
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
