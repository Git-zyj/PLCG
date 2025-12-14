#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)64;
signed char var_1 = (signed char)-35;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)69;
signed char var_4 = (signed char)-30;
unsigned int var_5 = 2979923335U;
long long int var_6 = 6018020912437393663LL;
unsigned char var_7 = (unsigned char)209;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)255;
long long int var_12 = -621133719691046503LL;
short var_14 = (short)2528;
int zero = 0;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-40;
signed char var_18 = (signed char)-73;
_Bool var_19 = (_Bool)1;
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
