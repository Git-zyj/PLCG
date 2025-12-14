#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -4472334985982555692LL;
_Bool var_4 = (_Bool)0;
unsigned int var_9 = 1873626263U;
signed char var_10 = (signed char)-57;
long long int var_11 = 1357477270528840105LL;
unsigned char var_13 = (unsigned char)215;
int var_15 = 1681280798;
int zero = 0;
short var_16 = (short)-17772;
unsigned long long int var_17 = 15496911731109477064ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
