#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16307350068503224723ULL;
int var_1 = 1078949810;
long long int var_2 = -3638233103198639672LL;
short var_3 = (short)-20614;
unsigned long long int var_4 = 2750039955948654124ULL;
unsigned long long int var_5 = 17872084418283963042ULL;
int var_6 = 1428839199;
int var_7 = 856454973;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 225825506596214636ULL;
unsigned int var_11 = 966205711U;
int zero = 0;
unsigned long long int var_12 = 7186908561224863984ULL;
_Bool var_13 = (_Bool)0;
int var_14 = 1518942060;
int var_15 = 2014254556;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
