#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)32355;
unsigned char var_5 = (unsigned char)100;
unsigned short var_7 = (unsigned short)11060;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_10 = -5946436054300605016LL;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)88;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
