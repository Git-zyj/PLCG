#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)204;
long long int var_2 = 4548596990697732576LL;
_Bool var_3 = (_Bool)1;
short var_5 = (short)26533;
unsigned short var_7 = (unsigned short)23921;
signed char var_10 = (signed char)-9;
int zero = 0;
long long int var_11 = -6185074981186653524LL;
signed char var_12 = (signed char)-110;
long long int var_13 = 7964500866781164051LL;
unsigned short var_14 = (unsigned short)62596;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
