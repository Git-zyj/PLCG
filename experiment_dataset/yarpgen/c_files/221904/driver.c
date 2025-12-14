#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4664;
long long int var_1 = -4332323270517154510LL;
unsigned char var_3 = (unsigned char)87;
long long int var_8 = 2126470533335035675LL;
short var_9 = (short)-31518;
unsigned int var_10 = 57765126U;
unsigned short var_11 = (unsigned short)20691;
unsigned short var_13 = (unsigned short)56957;
signed char var_14 = (signed char)108;
signed char var_16 = (signed char)113;
signed char var_17 = (signed char)-64;
short var_18 = (short)-11993;
unsigned short var_19 = (unsigned short)57306;
int zero = 0;
unsigned long long int var_20 = 7581943719927880284ULL;
long long int var_21 = -3281803406037775646LL;
short var_22 = (short)-7190;
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
