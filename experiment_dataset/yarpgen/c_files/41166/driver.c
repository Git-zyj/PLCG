#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11178593421344613539ULL;
long long int var_1 = -7625846485036180532LL;
unsigned short var_4 = (unsigned short)358;
unsigned short var_6 = (unsigned short)17219;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)84;
unsigned short var_11 = (unsigned short)15378;
int var_12 = -1952723934;
int var_14 = 419715040;
unsigned long long int var_15 = 11124104360244782492ULL;
short var_16 = (short)20654;
int zero = 0;
short var_17 = (short)2249;
long long int var_18 = 159080788989673592LL;
void init() {
}

void checksum() {
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
