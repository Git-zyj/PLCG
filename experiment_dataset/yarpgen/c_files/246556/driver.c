#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 664151641522864846ULL;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 16086090344687043003ULL;
int var_5 = -581614143;
long long int var_8 = 4295683863404410540LL;
unsigned short var_10 = (unsigned short)48577;
int zero = 0;
long long int var_15 = -2451352931684228018LL;
unsigned int var_16 = 1084481578U;
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
