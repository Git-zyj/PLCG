#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
short var_3 = (short)-20988;
long long int var_5 = 8975812916614994460LL;
unsigned short var_7 = (unsigned short)2156;
unsigned short var_9 = (unsigned short)14464;
int zero = 0;
_Bool var_10 = (_Bool)0;
long long int var_11 = 4589834626525422782LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
