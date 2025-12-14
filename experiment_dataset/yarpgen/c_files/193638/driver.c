#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15679498390718035256ULL;
unsigned short var_1 = (unsigned short)22829;
int var_4 = -134727048;
short var_5 = (short)6252;
int var_6 = -485571688;
signed char var_7 = (signed char)113;
int var_9 = -1700315562;
long long int var_12 = 3461974822875111605LL;
unsigned short var_13 = (unsigned short)14421;
signed char var_14 = (signed char)-65;
signed char var_15 = (signed char)-113;
int zero = 0;
long long int var_16 = 3672817490821407490LL;
unsigned short var_17 = (unsigned short)30141;
signed char var_18 = (signed char)-76;
unsigned long long int var_19 = 11027769379809704708ULL;
signed char var_20 = (signed char)126;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
