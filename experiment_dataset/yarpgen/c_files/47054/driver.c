#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)1548;
int var_6 = -704288279;
_Bool var_7 = (_Bool)0;
int var_16 = 1015759186;
unsigned short var_18 = (unsigned short)12515;
int zero = 0;
unsigned int var_19 = 3605792123U;
unsigned short var_20 = (unsigned short)23251;
void init() {
}

void checksum() {
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
