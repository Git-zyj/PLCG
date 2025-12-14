#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)52;
unsigned short var_1 = (unsigned short)21543;
_Bool var_3 = (_Bool)1;
unsigned int var_5 = 3116562786U;
int var_7 = -1165174508;
unsigned int var_9 = 438177349U;
short var_10 = (short)-20778;
unsigned int var_11 = 68767067U;
long long int var_15 = -2473324920661374112LL;
int var_17 = -1281548231;
int zero = 0;
long long int var_18 = 3813467259513377851LL;
unsigned int var_19 = 1367911665U;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 744335099739255184ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
