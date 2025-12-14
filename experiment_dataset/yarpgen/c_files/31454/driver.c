#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_2 = -3497982834488444288LL;
short var_4 = (short)12357;
unsigned short var_7 = (unsigned short)14929;
unsigned char var_8 = (unsigned char)91;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)42488;
int zero = 0;
unsigned long long int var_11 = 2974231734247654004ULL;
short var_12 = (short)23767;
short var_13 = (short)26909;
long long int var_14 = 6023369257284180048LL;
_Bool var_15 = (_Bool)0;
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
