#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2981791881U;
int var_2 = 1502622131;
unsigned int var_4 = 3763176138U;
unsigned long long int var_5 = 1065253961565575287ULL;
int var_6 = 1762816737;
unsigned long long int var_10 = 1922784709997357279ULL;
int var_13 = -1123315008;
long long int var_14 = 5763668707243165817LL;
int zero = 0;
int var_17 = 1537768307;
int var_18 = -2039775338;
unsigned int var_19 = 1141256301U;
long long int var_20 = -6120077086499121752LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
