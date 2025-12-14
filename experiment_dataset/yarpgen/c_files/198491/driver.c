#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1239799389;
unsigned short var_4 = (unsigned short)29691;
long long int var_7 = -7194373047701145377LL;
long long int var_9 = 814616511083079644LL;
long long int var_10 = -277308779619539037LL;
long long int var_11 = -8675395123465877894LL;
unsigned int var_14 = 131456710U;
unsigned int var_15 = 3732184733U;
short var_16 = (short)32174;
unsigned short var_17 = (unsigned short)11707;
unsigned short var_18 = (unsigned short)2872;
int zero = 0;
long long int var_19 = -4997552887700334057LL;
long long int var_20 = 6674901532056435408LL;
long long int var_21 = -113749464461524844LL;
unsigned int var_22 = 2637073938U;
short var_23 = (short)-24160;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
