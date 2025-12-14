#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11175;
short var_3 = (short)14817;
int var_4 = 1109580593;
signed char var_5 = (signed char)44;
unsigned char var_6 = (unsigned char)184;
long long int var_8 = 7012854912497668491LL;
long long int var_9 = 4331127199118243672LL;
signed char var_13 = (signed char)-40;
short var_15 = (short)-13856;
int zero = 0;
unsigned short var_16 = (unsigned short)46899;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
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
