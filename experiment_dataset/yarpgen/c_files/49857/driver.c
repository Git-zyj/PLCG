#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)1781;
_Bool var_7 = (_Bool)1;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)47559;
unsigned short var_13 = (unsigned short)39135;
unsigned long long int var_14 = 7181720082272517206ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)34;
int var_21 = 457129481;
unsigned char var_22 = (unsigned char)115;
long long int var_23 = -6596129937760944687LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
