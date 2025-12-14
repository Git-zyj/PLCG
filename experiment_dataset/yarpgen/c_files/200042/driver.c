#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2828042225U;
_Bool var_3 = (_Bool)0;
long long int var_5 = 746713490933165657LL;
unsigned char var_6 = (unsigned char)167;
signed char var_7 = (signed char)34;
long long int var_9 = -3826651476562211154LL;
signed char var_10 = (signed char)82;
unsigned int var_12 = 2970783896U;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned short var_17 = (unsigned short)22256;
_Bool var_18 = (_Bool)0;
int var_19 = -457742862;
void init() {
}

void checksum() {
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
