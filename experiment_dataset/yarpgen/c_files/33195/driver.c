#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)2959;
signed char var_2 = (signed char)-89;
short var_3 = (short)19205;
unsigned int var_5 = 4014343304U;
unsigned long long int var_6 = 13806756521609186905ULL;
long long int var_7 = 1022942312026653703LL;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)133;
int var_11 = 1114025289;
int zero = 0;
signed char var_14 = (signed char)105;
unsigned char var_15 = (unsigned char)173;
unsigned char var_16 = (unsigned char)38;
unsigned int var_17 = 2926522176U;
signed char var_18 = (signed char)-47;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
