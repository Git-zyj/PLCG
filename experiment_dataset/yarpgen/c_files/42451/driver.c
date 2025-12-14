#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_3 = (_Bool)1;
_Bool var_6 = (_Bool)0;
_Bool var_10 = (_Bool)0;
long long int var_12 = 3623154974142120899LL;
int zero = 0;
signed char var_14 = (signed char)100;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)77;
unsigned short var_17 = (unsigned short)7984;
long long int var_18 = -465852678880168107LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
