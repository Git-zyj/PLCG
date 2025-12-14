#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-123;
unsigned int var_2 = 676058317U;
unsigned short var_5 = (unsigned short)16246;
unsigned long long int var_6 = 2897828192306188775ULL;
unsigned long long int var_7 = 2166353608023730995ULL;
unsigned char var_8 = (unsigned char)215;
signed char var_10 = (signed char)91;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned char var_14 = (unsigned char)219;
unsigned char var_15 = (unsigned char)118;
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
