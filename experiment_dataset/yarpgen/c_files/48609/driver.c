#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_5 = -125704317;
int var_7 = -875448789;
short var_11 = (short)1266;
unsigned long long int var_13 = 18236131334741085415ULL;
int zero = 0;
long long int var_19 = -3715414179390025461LL;
int var_20 = 1240701220;
long long int var_21 = 5437207625173557920LL;
unsigned int var_22 = 1479784414U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
