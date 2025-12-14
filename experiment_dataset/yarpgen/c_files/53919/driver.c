#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)59902;
unsigned short var_10 = (unsigned short)52440;
signed char var_11 = (signed char)-19;
short var_14 = (short)-26971;
int zero = 0;
long long int var_19 = -4295349761473409116LL;
short var_20 = (short)-2133;
unsigned short var_21 = (unsigned short)12850;
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
