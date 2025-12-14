#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
short var_3 = (short)-14675;
short var_5 = (short)23729;
unsigned char var_7 = (unsigned char)181;
short var_9 = (short)-9047;
unsigned char var_10 = (unsigned char)140;
unsigned short var_12 = (unsigned short)5261;
signed char var_13 = (signed char)-7;
unsigned long long int var_14 = 17902647903154862093ULL;
int zero = 0;
long long int var_15 = -19346214970858127LL;
unsigned char var_16 = (unsigned char)131;
short var_17 = (short)24758;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)7;
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
