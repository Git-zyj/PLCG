#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)75;
unsigned short var_4 = (unsigned short)5767;
_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)238;
signed char var_9 = (signed char)-49;
unsigned long long int var_11 = 14890371972440099360ULL;
unsigned char var_12 = (unsigned char)97;
long long int var_13 = -8599679293906777317LL;
unsigned int var_14 = 2015863723U;
_Bool var_15 = (_Bool)1;
long long int var_17 = -7295161470108951881LL;
_Bool var_18 = (_Bool)1;
int zero = 0;
int var_19 = 1568486216;
short var_20 = (short)-26624;
void init() {
}

void checksum() {
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
