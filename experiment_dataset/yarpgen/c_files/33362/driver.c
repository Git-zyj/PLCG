#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)38004;
signed char var_4 = (signed char)-61;
signed char var_6 = (signed char)-61;
unsigned long long int var_7 = 4441695482360871190ULL;
int var_8 = 1623231033;
unsigned short var_9 = (unsigned short)28017;
_Bool var_10 = (_Bool)0;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned char var_14 = (unsigned char)221;
unsigned long long int var_15 = 17255759253041600126ULL;
void init() {
}

void checksum() {
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
