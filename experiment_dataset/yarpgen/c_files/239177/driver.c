#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8359365186985467770ULL;
signed char var_1 = (signed char)1;
unsigned long long int var_2 = 8361355287964607376ULL;
unsigned long long int var_3 = 9206520303916121503ULL;
long long int var_6 = -3546543496284868048LL;
unsigned char var_9 = (unsigned char)57;
long long int var_10 = 2907718347878641293LL;
int zero = 0;
int var_11 = -147259713;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
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
