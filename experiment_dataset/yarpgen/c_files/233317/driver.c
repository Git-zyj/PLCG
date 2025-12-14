#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)92;
unsigned short var_6 = (unsigned short)6259;
unsigned char var_7 = (unsigned char)62;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)54671;
unsigned short var_12 = (unsigned short)53800;
unsigned short var_14 = (unsigned short)15620;
unsigned int var_15 = 681316015U;
int zero = 0;
unsigned long long int var_17 = 12922956485832693746ULL;
short var_18 = (short)28692;
unsigned short var_19 = (unsigned short)49003;
unsigned int var_20 = 2397994440U;
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
