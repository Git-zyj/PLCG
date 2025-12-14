#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40201;
unsigned short var_1 = (unsigned short)25285;
unsigned short var_3 = (unsigned short)19688;
unsigned short var_7 = (unsigned short)59741;
unsigned short var_9 = (unsigned short)44149;
unsigned short var_11 = (unsigned short)35189;
signed char var_12 = (signed char)45;
short var_14 = (short)15257;
unsigned short var_15 = (unsigned short)46810;
signed char var_17 = (signed char)-125;
int zero = 0;
unsigned long long int var_19 = 28425199068591818ULL;
unsigned short var_20 = (unsigned short)19217;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)54765;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
