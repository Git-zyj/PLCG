#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)172;
_Bool var_2 = (_Bool)1;
short var_4 = (short)-4071;
_Bool var_7 = (_Bool)0;
_Bool var_10 = (_Bool)0;
long long int var_12 = 7786114544756037837LL;
short var_13 = (short)7204;
int zero = 0;
short var_16 = (short)-2843;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 1700512360U;
short var_19 = (short)20939;
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
