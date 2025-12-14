#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-3848;
unsigned char var_2 = (unsigned char)229;
unsigned char var_4 = (unsigned char)216;
short var_5 = (short)-23691;
unsigned int var_6 = 927423729U;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 14187062090495249663ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)236;
unsigned char var_14 = (unsigned char)85;
void init() {
}

void checksum() {
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
