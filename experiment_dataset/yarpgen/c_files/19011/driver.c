#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 191254574U;
int var_4 = 976463057;
unsigned short var_5 = (unsigned short)19281;
unsigned short var_12 = (unsigned short)14162;
unsigned char var_14 = (unsigned char)149;
int zero = 0;
unsigned int var_16 = 1461423923U;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
