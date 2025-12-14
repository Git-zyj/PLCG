#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)206;
unsigned short var_2 = (unsigned short)65122;
long long int var_4 = 2523922955291008839LL;
long long int var_10 = -4836076767751377870LL;
int zero = 0;
_Bool var_13 = (_Bool)0;
int var_14 = -1352314046;
unsigned char var_15 = (unsigned char)140;
unsigned short var_16 = (unsigned short)7918;
signed char var_17 = (signed char)-47;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
