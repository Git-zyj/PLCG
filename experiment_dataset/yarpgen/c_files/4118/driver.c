#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = 1876879083902765009LL;
_Bool var_5 = (_Bool)0;
unsigned char var_7 = (unsigned char)21;
_Bool var_8 = (_Bool)0;
unsigned short var_14 = (unsigned short)41324;
int zero = 0;
long long int var_16 = 2939489985149525186LL;
_Bool var_17 = (_Bool)1;
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
