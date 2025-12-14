#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -8474681954637318323LL;
unsigned short var_6 = (unsigned short)17798;
signed char var_7 = (signed char)119;
long long int var_9 = -4460387358646750391LL;
unsigned int var_10 = 1125384225U;
long long int var_11 = -2988610518318536901LL;
long long int var_12 = 3121105995767177373LL;
int var_13 = -1065257891;
signed char var_14 = (signed char)-85;
int zero = 0;
int var_16 = -1021996411;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)47;
unsigned long long int var_20 = 12565451568657040329ULL;
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
