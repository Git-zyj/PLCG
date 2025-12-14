#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_2 = (signed char)-53;
unsigned char var_3 = (unsigned char)1;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 1893424642810098820ULL;
long long int var_7 = -262440969270812137LL;
int zero = 0;
int var_10 = -304948903;
short var_11 = (short)10986;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)9;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
