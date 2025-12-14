#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3608380874602184824LL;
short var_5 = (short)-2642;
unsigned char var_7 = (unsigned char)141;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)54919;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 940919360U;
unsigned int var_17 = 2576072404U;
long long int var_18 = 188426298294982773LL;
unsigned char var_19 = (unsigned char)237;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
