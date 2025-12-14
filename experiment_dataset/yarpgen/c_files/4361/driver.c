#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)45;
unsigned int var_3 = 2694655420U;
unsigned char var_5 = (unsigned char)86;
int var_7 = -781199752;
unsigned short var_8 = (unsigned short)27591;
_Bool var_11 = (_Bool)0;
signed char var_13 = (signed char)29;
int zero = 0;
unsigned char var_14 = (unsigned char)96;
unsigned short var_15 = (unsigned short)30955;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 15018728643914680380ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
