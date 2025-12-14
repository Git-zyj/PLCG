#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1806182732;
unsigned long long int var_3 = 18266978793044133786ULL;
long long int var_7 = -2884378359092849323LL;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-19465;
short var_14 = (short)-32218;
unsigned char var_15 = (unsigned char)140;
_Bool var_17 = (_Bool)0;
int zero = 0;
long long int var_19 = 3052847188150092477LL;
int var_20 = -174643863;
unsigned short var_21 = (unsigned short)63226;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
