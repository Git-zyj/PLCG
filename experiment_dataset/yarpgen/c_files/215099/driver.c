#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5904447918472301590LL;
short var_1 = (short)-16700;
unsigned short var_2 = (unsigned short)64423;
unsigned int var_4 = 2781434732U;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-23042;
unsigned int var_9 = 332917474U;
signed char var_11 = (signed char)-92;
int zero = 0;
long long int var_12 = -1365584335178438495LL;
signed char var_13 = (signed char)-35;
unsigned int var_14 = 1578669954U;
signed char var_15 = (signed char)107;
unsigned long long int var_16 = 7439810066126344819ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
