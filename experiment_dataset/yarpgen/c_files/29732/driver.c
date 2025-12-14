#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-14;
unsigned int var_2 = 748484968U;
short var_3 = (short)28468;
unsigned short var_4 = (unsigned short)29139;
unsigned short var_5 = (unsigned short)38526;
short var_6 = (short)-32373;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)36340;
unsigned short var_10 = (unsigned short)1331;
int var_11 = -984874913;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)43;
long long int var_14 = 8919734124023035183LL;
long long int var_15 = 6793553648736909394LL;
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
