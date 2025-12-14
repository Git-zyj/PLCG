#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)45456;
_Bool var_2 = (_Bool)0;
unsigned long long int var_5 = 16023992522807865248ULL;
long long int var_6 = -804846159834107390LL;
signed char var_7 = (signed char)-103;
short var_9 = (short)-30172;
unsigned int var_10 = 3195888344U;
unsigned short var_11 = (unsigned short)20951;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_13 = 2007497531;
long long int var_14 = -3781585975630374865LL;
long long int var_15 = 593973964095096451LL;
unsigned int var_16 = 409191201U;
short var_17 = (short)-22134;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
