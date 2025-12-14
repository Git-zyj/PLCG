#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7238063885434719058LL;
int var_2 = -661599504;
unsigned int var_4 = 708743772U;
int var_5 = 1453618684;
int var_6 = 1029675459;
unsigned int var_7 = 2560180951U;
short var_8 = (short)-31775;
long long int var_9 = -6590703087409254103LL;
int zero = 0;
short var_11 = (short)12992;
int var_12 = -439731234;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 6771221176488697605ULL;
short var_15 = (short)-6496;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
