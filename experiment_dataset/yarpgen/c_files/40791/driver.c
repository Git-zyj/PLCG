#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50789;
unsigned char var_1 = (unsigned char)168;
unsigned int var_2 = 857579040U;
_Bool var_3 = (_Bool)1;
unsigned int var_6 = 327164826U;
long long int var_11 = -7464640224072947768LL;
long long int var_13 = -456957078162358640LL;
int zero = 0;
unsigned short var_14 = (unsigned short)25344;
unsigned long long int var_15 = 7771164111956371040ULL;
unsigned char var_16 = (unsigned char)159;
int var_17 = -363971038;
void init() {
}

void checksum() {
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
