#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)140;
signed char var_5 = (signed char)-92;
signed char var_7 = (signed char)6;
long long int var_8 = -7209894540546951126LL;
unsigned long long int var_10 = 12591931475343838496ULL;
long long int var_11 = 2265041854386737666LL;
short var_13 = (short)10282;
unsigned int var_16 = 917808464U;
unsigned short var_17 = (unsigned short)10599;
int zero = 0;
long long int var_19 = -4259535461984811292LL;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 10766275217451295368ULL;
void init() {
}

void checksum() {
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
