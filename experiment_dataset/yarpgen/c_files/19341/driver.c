#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19002;
short var_1 = (short)-2024;
int var_4 = 763528840;
_Bool var_7 = (_Bool)0;
short var_13 = (short)32088;
unsigned short var_14 = (unsigned short)4715;
unsigned char var_16 = (unsigned char)129;
int zero = 0;
unsigned long long int var_20 = 4141513567170710063ULL;
short var_21 = (short)-18615;
long long int var_22 = -8834915534236669013LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
