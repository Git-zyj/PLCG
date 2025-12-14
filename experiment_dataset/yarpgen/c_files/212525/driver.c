#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)29803;
unsigned short var_3 = (unsigned short)34241;
_Bool var_4 = (_Bool)0;
long long int var_5 = 451496757624590243LL;
long long int var_6 = -6626661205539334630LL;
short var_7 = (short)-30249;
unsigned long long int var_9 = 3151083157385001396ULL;
unsigned long long int var_12 = 236776098451385757ULL;
signed char var_13 = (signed char)6;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
int zero = 0;
long long int var_17 = 235232166724838799LL;
int var_18 = 617486935;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
