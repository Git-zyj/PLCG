#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7931491446497169922LL;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 1725525475844637222ULL;
unsigned short var_8 = (unsigned short)34794;
unsigned int var_10 = 898268608U;
unsigned long long int var_11 = 10552242258847610974ULL;
unsigned char var_13 = (unsigned char)169;
unsigned int var_14 = 4187942529U;
unsigned long long int var_15 = 12474250439020374537ULL;
long long int var_16 = 932256788253616616LL;
int zero = 0;
short var_17 = (short)-23388;
signed char var_18 = (signed char)109;
unsigned int var_19 = 1140078028U;
long long int var_20 = 986467868810356164LL;
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
