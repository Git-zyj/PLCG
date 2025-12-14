#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -690266192;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
unsigned short var_6 = (unsigned short)43877;
unsigned long long int var_8 = 18360712929559372051ULL;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
_Bool var_14 = (_Bool)0;
_Bool var_17 = (_Bool)0;
unsigned short var_19 = (unsigned short)28221;
int zero = 0;
unsigned short var_20 = (unsigned short)59745;
unsigned short var_21 = (unsigned short)30902;
unsigned long long int var_22 = 14742923536657992552ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
