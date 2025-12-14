#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)47902;
unsigned int var_2 = 2018667257U;
unsigned char var_5 = (unsigned char)228;
signed char var_13 = (signed char)55;
int var_14 = -1181497006;
int zero = 0;
unsigned short var_15 = (unsigned short)62629;
unsigned char var_16 = (unsigned char)60;
unsigned long long int var_17 = 5750993608070222541ULL;
void init() {
}

void checksum() {
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
