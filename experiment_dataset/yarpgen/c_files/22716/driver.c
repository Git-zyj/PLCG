#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)46161;
int var_4 = 2145084057;
unsigned short var_5 = (unsigned short)12763;
unsigned long long int var_7 = 7215079619727092576ULL;
int var_12 = 1533205192;
unsigned short var_15 = (unsigned short)46872;
int zero = 0;
int var_18 = 1629997318;
unsigned short var_19 = (unsigned short)42615;
unsigned long long int var_20 = 6549534460159522158ULL;
void init() {
}

void checksum() {
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
