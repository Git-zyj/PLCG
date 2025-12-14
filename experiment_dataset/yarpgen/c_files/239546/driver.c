#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1065339773935319305ULL;
short var_1 = (short)-21827;
int var_2 = -758337066;
unsigned long long int var_3 = 14414623618181424154ULL;
unsigned int var_5 = 3418719670U;
unsigned int var_6 = 600865990U;
unsigned long long int var_7 = 10467935769964804224ULL;
unsigned int var_8 = 2778120762U;
short var_9 = (short)11440;
short var_11 = (short)31556;
int var_12 = 513269537;
int zero = 0;
long long int var_15 = -8251772986821332966LL;
_Bool var_16 = (_Bool)0;
long long int var_17 = 363118644789142702LL;
unsigned int var_18 = 485858853U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
