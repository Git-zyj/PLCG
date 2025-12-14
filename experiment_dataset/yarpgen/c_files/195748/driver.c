#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)17390;
long long int var_6 = 4808697774862435287LL;
unsigned long long int var_8 = 16724839007900057189ULL;
unsigned short var_9 = (unsigned short)52102;
int zero = 0;
short var_11 = (short)-8775;
long long int var_12 = 8716505411687896012LL;
unsigned long long int var_13 = 10844718236787495166ULL;
long long int var_14 = 6605689733224923680LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
