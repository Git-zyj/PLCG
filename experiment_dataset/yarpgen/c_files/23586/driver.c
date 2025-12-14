#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)114;
short var_1 = (short)-8447;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
short var_12 = (short)31814;
int zero = 0;
long long int var_17 = 260271185818690343LL;
unsigned short var_18 = (unsigned short)13852;
int var_19 = 510638648;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
