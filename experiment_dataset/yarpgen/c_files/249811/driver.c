#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)64477;
signed char var_10 = (signed char)13;
unsigned long long int var_13 = 16447911425944048689ULL;
signed char var_14 = (signed char)-50;
unsigned short var_15 = (unsigned short)960;
_Bool var_16 = (_Bool)1;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 624328948U;
short var_20 = (short)13531;
unsigned char var_21 = (unsigned char)98;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
