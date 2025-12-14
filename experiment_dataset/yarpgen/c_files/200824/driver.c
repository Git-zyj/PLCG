#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8294325084625228995ULL;
int var_1 = 1514697008;
short var_3 = (short)-15784;
unsigned long long int var_4 = 2586408349094312830ULL;
short var_5 = (short)20055;
unsigned long long int var_11 = 16038814257600673936ULL;
unsigned short var_12 = (unsigned short)39518;
short var_13 = (short)18967;
int zero = 0;
unsigned long long int var_14 = 17374661452036668339ULL;
unsigned long long int var_15 = 10588061517410245342ULL;
unsigned short var_16 = (unsigned short)53864;
int var_17 = -746545038;
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
