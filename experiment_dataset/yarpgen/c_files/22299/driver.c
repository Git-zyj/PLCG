#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13955;
long long int var_2 = 8112987838660811125LL;
unsigned short var_3 = (unsigned short)64117;
unsigned short var_7 = (unsigned short)25781;
unsigned char var_8 = (unsigned char)107;
unsigned long long int var_10 = 2432174416741524203ULL;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
long long int var_14 = 1006526683201968691LL;
int zero = 0;
long long int var_15 = -5699729578458247854LL;
long long int var_16 = 3736353034599304645LL;
unsigned int var_17 = 2132576763U;
unsigned int var_18 = 3315839926U;
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
