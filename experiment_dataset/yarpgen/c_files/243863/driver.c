#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1771964019U;
unsigned long long int var_1 = 7073787349376461661ULL;
unsigned int var_2 = 388528847U;
int var_4 = 1902302184;
unsigned int var_5 = 2535604474U;
unsigned int var_6 = 187509857U;
_Bool var_7 = (_Bool)1;
int var_8 = -446470145;
int var_9 = -1834497971;
short var_10 = (short)32547;
short var_11 = (short)-31500;
int var_12 = -464528540;
int zero = 0;
unsigned int var_13 = 3553842697U;
long long int var_14 = 5439932312266582334LL;
unsigned long long int var_15 = 14706961071848302760ULL;
unsigned char var_16 = (unsigned char)23;
unsigned long long int var_17 = 2522614642792802679ULL;
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
