#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)43;
unsigned int var_1 = 435678343U;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)61650;
long long int var_9 = 6258164601928188579LL;
unsigned int var_10 = 2015509132U;
unsigned long long int var_13 = 15493217513101196911ULL;
int zero = 0;
signed char var_14 = (signed char)82;
unsigned short var_15 = (unsigned short)62032;
unsigned long long int var_16 = 3532795025226760969ULL;
unsigned int var_17 = 3805890708U;
unsigned short var_18 = (unsigned short)56404;
unsigned int var_19 = 34930118U;
unsigned int var_20 = 453220096U;
int var_21 = -1617809781;
unsigned int var_22 = 3352061915U;
long long int var_23 = -4175936604898301820LL;
int var_24 = -1256361340;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
