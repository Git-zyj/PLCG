#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)24909;
short var_2 = (short)1640;
_Bool var_3 = (_Bool)1;
unsigned long long int var_6 = 18222924132062937142ULL;
int zero = 0;
unsigned long long int var_11 = 1917355472228837339ULL;
short var_12 = (short)-13266;
long long int var_13 = -3226910523404562486LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
