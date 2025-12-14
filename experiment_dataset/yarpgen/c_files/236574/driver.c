#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_4 = 3149530121944678397LL;
int var_5 = 847599123;
unsigned long long int var_6 = 1435108338590327465ULL;
signed char var_7 = (signed char)-72;
_Bool var_8 = (_Bool)1;
_Bool var_12 = (_Bool)0;
unsigned short var_14 = (unsigned short)41332;
int zero = 0;
unsigned long long int var_15 = 4287170739435787191ULL;
long long int var_16 = -8013744612720167388LL;
_Bool var_17 = (_Bool)0;
int var_18 = 178109265;
void init() {
}

void checksum() {
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
