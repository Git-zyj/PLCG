#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 857360738408368690LL;
_Bool var_1 = (_Bool)1;
unsigned char var_10 = (unsigned char)198;
long long int var_12 = -723786154292229365LL;
unsigned long long int var_18 = 14073506308635311668ULL;
signed char var_19 = (signed char)-92;
int zero = 0;
_Bool var_20 = (_Bool)1;
long long int var_21 = 5698466871003312571LL;
signed char var_22 = (signed char)91;
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
