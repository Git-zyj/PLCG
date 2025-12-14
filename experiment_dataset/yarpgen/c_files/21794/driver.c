#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)241;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 1672484134711538039ULL;
unsigned short var_5 = (unsigned short)41034;
long long int var_6 = 1850994096820808288LL;
unsigned char var_10 = (unsigned char)181;
_Bool var_11 = (_Bool)0;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)55610;
int zero = 0;
int var_17 = -1543324099;
unsigned long long int var_18 = 17740966600174545069ULL;
void init() {
}

void checksum() {
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
