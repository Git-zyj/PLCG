#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1419704881U;
unsigned char var_2 = (unsigned char)196;
_Bool var_8 = (_Bool)1;
short var_14 = (short)30957;
int zero = 0;
long long int var_18 = 1784804440934447225LL;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)41158;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
