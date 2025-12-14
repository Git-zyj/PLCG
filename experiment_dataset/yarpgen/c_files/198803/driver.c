#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-31111;
_Bool var_3 = (_Bool)0;
int var_4 = -718877583;
signed char var_5 = (signed char)25;
int var_7 = -1805536988;
short var_10 = (short)-22934;
int zero = 0;
unsigned char var_12 = (unsigned char)186;
long long int var_13 = -669097695848213082LL;
unsigned long long int var_14 = 5918359866307892120ULL;
short var_15 = (short)-23576;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
