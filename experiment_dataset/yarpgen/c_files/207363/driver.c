#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 959435731;
_Bool var_4 = (_Bool)1;
signed char var_7 = (signed char)99;
unsigned short var_8 = (unsigned short)50157;
unsigned long long int var_10 = 9000451460493542565ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)39598;
unsigned short var_17 = (unsigned short)42728;
void init() {
}

void checksum() {
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
