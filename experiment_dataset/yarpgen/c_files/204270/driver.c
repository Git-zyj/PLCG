#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8761056427374865087ULL;
unsigned short var_2 = (unsigned short)43222;
unsigned short var_4 = (unsigned short)47039;
unsigned long long int var_8 = 11200787704836646022ULL;
unsigned short var_14 = (unsigned short)93;
unsigned long long int var_15 = 8540304368267115770ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)32924;
unsigned long long int var_18 = 6117934813595015624ULL;
unsigned short var_19 = (unsigned short)53340;
unsigned short var_20 = (unsigned short)11895;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
