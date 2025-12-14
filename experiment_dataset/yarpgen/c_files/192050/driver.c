#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 634757218;
unsigned char var_2 = (unsigned char)8;
long long int var_4 = -8342751790396046324LL;
int var_5 = 296896130;
signed char var_6 = (signed char)-85;
int var_8 = 1656117524;
unsigned int var_10 = 22681418U;
int zero = 0;
unsigned long long int var_11 = 1528911751785694000ULL;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)51907;
short var_14 = (short)-3294;
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
