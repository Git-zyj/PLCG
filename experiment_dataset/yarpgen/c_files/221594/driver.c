#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 3015338616803043573ULL;
unsigned short var_5 = (unsigned short)51021;
unsigned long long int var_6 = 11979325546954801841ULL;
int var_7 = -1040377722;
int zero = 0;
unsigned short var_10 = (unsigned short)60971;
short var_11 = (short)16235;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
