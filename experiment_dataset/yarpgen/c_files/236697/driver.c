#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15960582052828973167ULL;
int var_1 = -1695007814;
unsigned long long int var_2 = 4261937364664383905ULL;
unsigned long long int var_4 = 15955076332034911246ULL;
short var_5 = (short)14610;
unsigned int var_6 = 3737167477U;
long long int var_10 = -4596993876687947729LL;
int zero = 0;
long long int var_12 = 1957694734629437040LL;
unsigned int var_13 = 3628321272U;
signed char var_14 = (signed char)23;
unsigned short var_15 = (unsigned short)35872;
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
