#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2341070143564035973ULL;
unsigned long long int var_1 = 16832644245450914532ULL;
long long int var_2 = -5775205281082144718LL;
long long int var_3 = 7525394618367293564LL;
long long int var_5 = -597562617270039632LL;
long long int var_6 = 7293357732062349935LL;
signed char var_7 = (signed char)60;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 3807651012653941368ULL;
long long int var_10 = 6653789440555734361LL;
int zero = 0;
unsigned long long int var_11 = 15001091653888940403ULL;
unsigned int var_12 = 1154085119U;
unsigned short var_13 = (unsigned short)25407;
short var_14 = (short)20966;
long long int var_15 = 2895031289524648079LL;
long long int var_16 = 8481398994805669089LL;
short arr_0 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (short)-19982;
}

void checksum() {
    hash(&seed, var_11);
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
