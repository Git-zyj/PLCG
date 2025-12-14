#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)75;
unsigned long long int var_11 = 5048312230744688215ULL;
int var_14 = -1009327830;
unsigned short var_15 = (unsigned short)50476;
int zero = 0;
long long int var_16 = 6379883781503025956LL;
unsigned long long int var_17 = 3156152967739661793ULL;
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
