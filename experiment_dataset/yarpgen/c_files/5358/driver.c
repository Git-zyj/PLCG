#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-2112;
short var_5 = (short)14401;
unsigned long long int var_8 = 8786115875281640179ULL;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-18277;
int zero = 0;
short var_15 = (short)-149;
short var_16 = (short)22079;
short var_17 = (short)-32263;
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
