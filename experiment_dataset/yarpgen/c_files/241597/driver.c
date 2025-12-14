#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)24136;
_Bool var_2 = (_Bool)0;
short var_3 = (short)27390;
unsigned int var_6 = 1530983147U;
int var_8 = 1501434045;
int var_9 = 2088338349;
int zero = 0;
unsigned char var_10 = (unsigned char)78;
long long int var_11 = 5013061178756514623LL;
_Bool var_12 = (_Bool)1;
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
