#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)56188;
unsigned int var_5 = 1569995678U;
unsigned short var_8 = (unsigned short)28505;
signed char var_9 = (signed char)1;
long long int var_12 = 25372719977411359LL;
unsigned char var_13 = (unsigned char)237;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned short var_19 = (unsigned short)51073;
long long int var_20 = -8508415924537266112LL;
void init() {
}

void checksum() {
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
