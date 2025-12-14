#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)52;
unsigned char var_1 = (unsigned char)242;
short var_3 = (short)-27341;
unsigned long long int var_4 = 5233678042533756141ULL;
unsigned int var_6 = 3393298621U;
int var_12 = 74772463;
signed char var_13 = (signed char)-104;
int var_14 = -1783430732;
int zero = 0;
short var_15 = (short)9462;
int var_16 = -1125083444;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
