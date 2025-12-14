#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1777151687;
signed char var_1 = (signed char)33;
short var_3 = (short)25439;
long long int var_7 = 3672625852424772391LL;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)52836;
long long int var_11 = 2545211738246635113LL;
unsigned short var_14 = (unsigned short)47570;
long long int var_15 = -6024983798403520914LL;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned short var_18 = (unsigned short)27999;
unsigned short var_19 = (unsigned short)2193;
unsigned short var_20 = (unsigned short)43944;
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
