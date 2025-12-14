#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14885169915751311600ULL;
int var_1 = 450455748;
unsigned int var_5 = 1987982648U;
short var_6 = (short)2030;
long long int var_8 = 3888311614170647584LL;
unsigned int var_10 = 2323534129U;
int var_11 = 1739445803;
int var_14 = -370289428;
signed char var_16 = (signed char)110;
int var_19 = 1516968627;
int zero = 0;
long long int var_20 = -2230122802275375736LL;
_Bool var_21 = (_Bool)0;
int var_22 = -860986866;
signed char var_23 = (signed char)44;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
