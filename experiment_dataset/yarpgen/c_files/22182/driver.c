#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)70;
long long int var_1 = 5207516841037630465LL;
unsigned long long int var_2 = 14816737312476162456ULL;
int var_4 = -743222774;
unsigned long long int var_5 = 8180135981421716034ULL;
unsigned long long int var_8 = 7107049295413465218ULL;
long long int var_9 = 1450179179080033252LL;
signed char var_10 = (signed char)66;
signed char var_13 = (signed char)76;
int zero = 0;
int var_14 = 960330763;
unsigned short var_15 = (unsigned short)3631;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
