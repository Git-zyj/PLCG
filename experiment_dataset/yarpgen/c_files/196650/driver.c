#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1680509758;
unsigned char var_1 = (unsigned char)35;
long long int var_2 = -4077443279788181236LL;
long long int var_4 = -8947122800203909259LL;
int var_6 = -483932212;
long long int var_8 = -2873493451337024770LL;
int var_10 = 693766378;
long long int var_12 = -6361653659908373779LL;
long long int var_13 = 6592706472956620207LL;
short var_14 = (short)-2252;
signed char var_16 = (signed char)46;
int zero = 0;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-18;
unsigned short var_20 = (unsigned short)40138;
unsigned int var_21 = 460458848U;
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
