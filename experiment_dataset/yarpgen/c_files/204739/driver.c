#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 1236277106;
_Bool var_7 = (_Bool)1;
long long int var_10 = 1347413413955012117LL;
unsigned int var_12 = 4164356732U;
signed char var_14 = (signed char)14;
int var_15 = -1330897435;
signed char var_16 = (signed char)-39;
int zero = 0;
short var_17 = (short)-1442;
unsigned short var_18 = (unsigned short)58107;
unsigned short var_19 = (unsigned short)38475;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
