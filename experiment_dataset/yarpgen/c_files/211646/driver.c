#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17137569723625235652ULL;
unsigned long long int var_1 = 463883615767849988ULL;
long long int var_2 = 4401816121682606887LL;
short var_11 = (short)-17828;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_13 = (short)17237;
short var_14 = (short)-13812;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
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
