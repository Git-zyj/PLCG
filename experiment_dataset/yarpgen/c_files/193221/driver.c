#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)1;
unsigned char var_12 = (unsigned char)51;
long long int var_13 = -4360602049231570111LL;
_Bool var_14 = (_Bool)0;
long long int var_17 = 5374594060729584307LL;
int zero = 0;
unsigned int var_18 = 1097563346U;
signed char var_19 = (signed char)126;
unsigned short var_20 = (unsigned short)6303;
unsigned long long int var_21 = 2545113321263123049ULL;
unsigned int var_22 = 3764740830U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
