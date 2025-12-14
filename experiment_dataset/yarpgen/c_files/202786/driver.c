#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 78462970;
unsigned char var_3 = (unsigned char)121;
unsigned char var_6 = (unsigned char)181;
short var_8 = (short)-22806;
short var_9 = (short)11501;
int var_11 = -1716795059;
unsigned short var_12 = (unsigned short)50028;
int zero = 0;
unsigned int var_13 = 3600018904U;
unsigned long long int var_14 = 98080673891830136ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
