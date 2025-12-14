#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1081432210;
unsigned char var_1 = (unsigned char)1;
short var_2 = (short)27403;
unsigned char var_5 = (unsigned char)18;
unsigned char var_6 = (unsigned char)122;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)57;
unsigned long long int var_13 = 1405454678448584725ULL;
unsigned long long int var_14 = 16070381584289331110ULL;
short var_16 = (short)-1826;
int zero = 0;
unsigned int var_17 = 351516851U;
short var_18 = (short)24799;
short var_19 = (short)13296;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
