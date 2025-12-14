#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)196;
long long int var_2 = 1107762063255746171LL;
unsigned long long int var_4 = 4333018130205268910ULL;
unsigned long long int var_5 = 2768601132889720591ULL;
int var_6 = -697685832;
unsigned char var_7 = (unsigned char)198;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)20443;
long long int var_11 = -2753682504352355833LL;
unsigned long long int var_12 = 10447043824667383550ULL;
unsigned short var_13 = (unsigned short)61491;
int zero = 0;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-93;
signed char var_16 = (signed char)47;
int var_17 = -986250686;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
