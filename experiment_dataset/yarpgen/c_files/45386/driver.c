#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_4 = (unsigned char)159;
int var_7 = 1868215901;
_Bool var_8 = (_Bool)0;
int var_10 = -430417346;
long long int var_11 = 6617719073269814325LL;
unsigned long long int var_13 = 17959922943963849656ULL;
int zero = 0;
unsigned long long int var_20 = 209290607905414119ULL;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 18300217167549215562ULL;
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
