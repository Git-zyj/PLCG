#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 12427608903730090656ULL;
unsigned long long int var_8 = 5096228768791609970ULL;
unsigned short var_10 = (unsigned short)28857;
unsigned long long int var_11 = 9722082508637858227ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)11949;
unsigned char var_15 = (unsigned char)227;
unsigned long long int var_16 = 11298010368126718857ULL;
unsigned long long int var_17 = 8782984418898242932ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
