#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-104;
signed char var_1 = (signed char)-94;
signed char var_2 = (signed char)69;
signed char var_3 = (signed char)62;
_Bool var_7 = (_Bool)0;
unsigned char var_10 = (unsigned char)233;
int var_14 = -2069318204;
unsigned int var_15 = 3823608689U;
int zero = 0;
int var_16 = 410711639;
unsigned short var_17 = (unsigned short)157;
unsigned char var_18 = (unsigned char)113;
signed char var_19 = (signed char)82;
int var_20 = -1137344408;
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
