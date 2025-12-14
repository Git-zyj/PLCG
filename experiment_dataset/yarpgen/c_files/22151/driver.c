#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)-3975;
long long int var_2 = -7583914243593011819LL;
short var_3 = (short)19923;
_Bool var_5 = (_Bool)0;
int var_12 = 1193993399;
int zero = 0;
unsigned char var_14 = (unsigned char)118;
unsigned short var_15 = (unsigned short)14527;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
