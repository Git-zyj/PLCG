#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5525676965185353434LL;
long long int var_2 = -7163855960616738273LL;
long long int var_3 = 5457137775278649266LL;
int var_4 = 1074259286;
long long int var_5 = 2554996032230121550LL;
unsigned int var_7 = 4291994450U;
unsigned short var_8 = (unsigned short)36375;
int zero = 0;
long long int var_10 = -2483487851102033800LL;
unsigned int var_11 = 1438856558U;
unsigned int var_12 = 3060025959U;
unsigned short var_13 = (unsigned short)27921;
unsigned char var_14 = (unsigned char)123;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 3106378388U;
unsigned int var_17 = 1842256880U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
