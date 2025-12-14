#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)64;
int var_4 = 1426001890;
unsigned char var_6 = (unsigned char)144;
long long int var_7 = -2510154456222617427LL;
unsigned char var_8 = (unsigned char)6;
_Bool var_10 = (_Bool)1;
short var_15 = (short)-15153;
int var_16 = 969162852;
int zero = 0;
unsigned long long int var_18 = 13459368741269582485ULL;
int var_19 = -599147709;
unsigned long long int var_20 = 115796018903700351ULL;
_Bool var_21 = (_Bool)1;
int var_22 = -1357634118;
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
