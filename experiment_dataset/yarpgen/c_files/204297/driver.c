#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -194548721273173017LL;
unsigned long long int var_5 = 9573164393824816081ULL;
signed char var_9 = (signed char)-95;
long long int var_11 = -6625897510105651354LL;
unsigned short var_13 = (unsigned short)64091;
int var_15 = -1469189442;
int zero = 0;
unsigned int var_16 = 291006870U;
long long int var_17 = 7446415192922417424LL;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)18991;
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
