#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3964169533199992903LL;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)16;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 2382208851U;
_Bool var_5 = (_Bool)0;
long long int var_6 = 2838372071353291006LL;
long long int var_7 = -7725462438742098562LL;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)-122;
int var_10 = 1383574872;
int zero = 0;
signed char var_11 = (signed char)-30;
short var_12 = (short)19602;
signed char var_13 = (signed char)-1;
long long int var_14 = 2766842549680217920LL;
int var_15 = 1029616582;
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
