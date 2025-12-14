#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)117;
short var_1 = (short)17524;
int var_7 = -1615560864;
unsigned char var_12 = (unsigned char)21;
int zero = 0;
int var_16 = -1719420373;
_Bool var_17 = (_Bool)1;
long long int var_18 = -6398143920095802425LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
