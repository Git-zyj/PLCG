#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5097067375863536736ULL;
_Bool var_1 = (_Bool)1;
short var_2 = (short)20234;
unsigned char var_4 = (unsigned char)32;
signed char var_6 = (signed char)12;
unsigned char var_8 = (unsigned char)110;
int var_10 = 754864780;
unsigned char var_12 = (unsigned char)158;
unsigned char var_13 = (unsigned char)188;
int zero = 0;
int var_14 = -1794431741;
signed char var_15 = (signed char)81;
short var_16 = (short)-5928;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
