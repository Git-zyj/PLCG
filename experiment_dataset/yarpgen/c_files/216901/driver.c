#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1939879514;
unsigned long long int var_2 = 10681812289653016082ULL;
int var_4 = -464770121;
unsigned short var_5 = (unsigned short)17306;
signed char var_7 = (signed char)92;
unsigned short var_8 = (unsigned short)37710;
int zero = 0;
unsigned long long int var_13 = 547444665987094505ULL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
