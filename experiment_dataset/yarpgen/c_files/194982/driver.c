#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)18416;
signed char var_2 = (signed char)-12;
_Bool var_3 = (_Bool)0;
unsigned char var_7 = (unsigned char)89;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
int var_12 = 1270444759;
int zero = 0;
long long int var_13 = 9084651809304474170LL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
