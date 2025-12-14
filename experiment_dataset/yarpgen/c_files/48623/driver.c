#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_4 = -6862647910157596613LL;
unsigned long long int var_8 = 10350104722896109064ULL;
short var_10 = (short)-24877;
unsigned int var_13 = 409671642U;
unsigned char var_15 = (unsigned char)108;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)14160;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)59283;
void init() {
}

void checksum() {
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
