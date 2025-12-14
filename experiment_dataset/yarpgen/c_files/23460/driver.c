#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-6521;
unsigned char var_6 = (unsigned char)143;
unsigned long long int var_7 = 3363577123111150287ULL;
unsigned long long int var_8 = 538116377317139701ULL;
unsigned char var_13 = (unsigned char)161;
short var_15 = (short)19293;
int zero = 0;
short var_18 = (short)1361;
unsigned long long int var_19 = 10754543741197006343ULL;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)30;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
