#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11573287534613477896ULL;
long long int var_1 = 2034202344288141202LL;
short var_2 = (short)-23765;
int var_3 = -1655401480;
unsigned long long int var_4 = 16322781808615267915ULL;
_Bool var_5 = (_Bool)0;
int var_6 = 1751919937;
unsigned int var_7 = 4166761305U;
short var_8 = (short)-12535;
unsigned int var_9 = 4022797889U;
int zero = 0;
long long int var_11 = 7428987778457669209LL;
short var_12 = (short)-10327;
unsigned int var_13 = 4102682196U;
long long int var_14 = -2496853973486933767LL;
unsigned int var_15 = 753519790U;
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
