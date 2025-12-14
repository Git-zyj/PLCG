#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-23;
unsigned short var_2 = (unsigned short)44155;
short var_4 = (short)-4661;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)12;
int var_9 = -1981787683;
unsigned short var_10 = (unsigned short)47925;
long long int var_12 = 3220944912229648580LL;
int zero = 0;
_Bool var_13 = (_Bool)0;
int var_14 = -1612253770;
unsigned long long int var_15 = 7226740764147820299ULL;
long long int var_16 = 8960537925842037484LL;
long long int var_17 = 7302786133017007278LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
