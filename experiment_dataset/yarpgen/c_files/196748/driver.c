#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)13;
unsigned short var_1 = (unsigned short)35236;
int var_2 = -331498606;
short var_3 = (short)29970;
short var_11 = (short)14592;
int var_13 = -371519217;
int zero = 0;
short var_14 = (short)-6295;
unsigned long long int var_15 = 9904969157733145910ULL;
unsigned char var_16 = (unsigned char)245;
signed char var_17 = (signed char)121;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
