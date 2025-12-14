#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)3141;
unsigned short var_3 = (unsigned short)55664;
unsigned int var_4 = 797411923U;
unsigned int var_8 = 3361118434U;
int zero = 0;
int var_19 = -1438164905;
unsigned short var_20 = (unsigned short)32041;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
