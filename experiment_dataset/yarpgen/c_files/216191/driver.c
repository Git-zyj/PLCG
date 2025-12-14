#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)252;
_Bool var_4 = (_Bool)1;
short var_6 = (short)30429;
unsigned char var_8 = (unsigned char)60;
long long int var_11 = 2549944366491631772LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 1759723521U;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)59019;
unsigned long long int var_18 = 12272054853469607663ULL;
unsigned int var_19 = 1695897427U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
