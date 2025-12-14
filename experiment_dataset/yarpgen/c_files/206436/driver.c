#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
int var_3 = -1697169357;
unsigned long long int var_5 = 17405383322486628955ULL;
signed char var_10 = (signed char)-8;
unsigned char var_14 = (unsigned char)117;
int zero = 0;
short var_15 = (short)11088;
short var_16 = (short)-23202;
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
