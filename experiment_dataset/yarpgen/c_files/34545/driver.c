#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1931889566;
int var_1 = 1631953802;
_Bool var_3 = (_Bool)0;
int var_4 = -1911079146;
int var_5 = -1464652986;
signed char var_7 = (signed char)35;
_Bool var_8 = (_Bool)0;
_Bool var_10 = (_Bool)0;
int zero = 0;
short var_11 = (short)-1209;
unsigned char var_12 = (unsigned char)89;
unsigned long long int var_13 = 18172762354892078436ULL;
short var_14 = (short)-15245;
int var_15 = 143517038;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
