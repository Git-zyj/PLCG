#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-3498;
unsigned short var_3 = (unsigned short)5836;
unsigned short var_5 = (unsigned short)28798;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
signed char var_12 = (signed char)-95;
unsigned char var_13 = (unsigned char)249;
long long int var_15 = 1847035242765754271LL;
long long int var_17 = -886232045632981073LL;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)172;
short var_21 = (short)13906;
void init() {
}

void checksum() {
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
