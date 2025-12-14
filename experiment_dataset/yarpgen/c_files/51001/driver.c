#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_3 = (signed char)-43;
unsigned char var_5 = (unsigned char)232;
unsigned long long int var_8 = 7027750171695714868ULL;
unsigned char var_10 = (unsigned char)149;
long long int var_12 = -1288170259846920571LL;
int zero = 0;
unsigned char var_15 = (unsigned char)198;
unsigned short var_16 = (unsigned short)50647;
unsigned short var_17 = (unsigned short)33478;
void init() {
}

void checksum() {
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
