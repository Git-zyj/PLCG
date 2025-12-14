#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)31;
_Bool var_3 = (_Bool)0;
long long int var_6 = -8469704561173242051LL;
long long int var_7 = -8536123855590018953LL;
unsigned long long int var_9 = 5061511696195625645ULL;
unsigned char var_10 = (unsigned char)255;
unsigned int var_11 = 3124787557U;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned short var_14 = (unsigned short)37284;
unsigned short var_15 = (unsigned short)31213;
unsigned char var_16 = (unsigned char)56;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
