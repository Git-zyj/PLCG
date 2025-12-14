#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5188653179290783236LL;
unsigned short var_3 = (unsigned short)32487;
short var_4 = (short)-14503;
unsigned long long int var_5 = 436437638106686663ULL;
unsigned int var_6 = 3896032912U;
signed char var_7 = (signed char)111;
unsigned short var_9 = (unsigned short)51299;
int var_11 = 2050998007;
long long int var_12 = 7938379168354088696LL;
int zero = 0;
signed char var_15 = (signed char)-67;
long long int var_16 = -3130924440771056749LL;
unsigned int var_17 = 679477766U;
_Bool var_18 = (_Bool)0;
long long int var_19 = -969302128985832189LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
