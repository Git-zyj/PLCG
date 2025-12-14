#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_4 = 2923493619163013899LL;
signed char var_5 = (signed char)87;
unsigned char var_8 = (unsigned char)29;
long long int var_9 = 2959101436092788019LL;
unsigned char var_10 = (unsigned char)242;
unsigned short var_13 = (unsigned short)18024;
long long int var_16 = 6493500100911607479LL;
int zero = 0;
long long int var_17 = -8707333066946651928LL;
_Bool var_18 = (_Bool)1;
int var_19 = 1993110661;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
