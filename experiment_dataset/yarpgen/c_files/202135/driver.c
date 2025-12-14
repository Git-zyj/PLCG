#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)43;
unsigned short var_5 = (unsigned short)28274;
long long int var_7 = 9183252084046180970LL;
long long int var_15 = 5305496199995848401LL;
_Bool var_16 = (_Bool)1;
int zero = 0;
long long int var_17 = -3606529115982610378LL;
long long int var_18 = 5030863459186750132LL;
unsigned long long int var_19 = 6167536794548376052ULL;
unsigned char var_20 = (unsigned char)181;
short var_21 = (short)-24924;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
