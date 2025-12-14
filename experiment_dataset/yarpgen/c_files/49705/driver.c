#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6689993930247176448LL;
unsigned short var_3 = (unsigned short)19983;
long long int var_11 = 1026101636781230348LL;
unsigned short var_13 = (unsigned short)46130;
unsigned long long int var_14 = 13794258046589865694ULL;
int zero = 0;
short var_16 = (short)-28682;
long long int var_17 = -4981882089775494392LL;
short var_18 = (short)23481;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
