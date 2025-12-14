#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)5;
long long int var_2 = -6437001343698749944LL;
long long int var_3 = -3335567500487064295LL;
unsigned char var_5 = (unsigned char)148;
unsigned int var_7 = 2174665120U;
short var_8 = (short)27470;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)53072;
long long int var_13 = 6776454713586901080LL;
short var_14 = (short)16074;
unsigned char var_15 = (unsigned char)101;
int zero = 0;
long long int var_17 = -942527748833128697LL;
long long int var_18 = -7269856704098274362LL;
unsigned short var_19 = (unsigned short)61433;
unsigned int var_20 = 3596480743U;
signed char var_21 = (signed char)-65;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
