#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 6168230486294016561ULL;
signed char var_5 = (signed char)59;
_Bool var_6 = (_Bool)0;
short var_7 = (short)14174;
unsigned long long int var_8 = 4705826841970195252ULL;
unsigned char var_9 = (unsigned char)162;
int var_10 = -1628719533;
long long int var_11 = 4433462259582784597LL;
int var_12 = -1960750056;
signed char var_13 = (signed char)85;
int zero = 0;
unsigned int var_14 = 876997920U;
int var_15 = 436089054;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 1709053498426801753ULL;
unsigned int var_18 = 2568067881U;
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
