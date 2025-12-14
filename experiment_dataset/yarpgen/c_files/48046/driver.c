#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21599;
long long int var_1 = 5148776062076877822LL;
unsigned int var_3 = 1444562682U;
short var_5 = (short)32117;
long long int var_8 = -1962553919885233161LL;
long long int var_9 = -385479531660607191LL;
short var_11 = (short)-781;
long long int var_14 = 1774724159395478333LL;
int zero = 0;
long long int var_19 = 1943668206385172151LL;
short var_20 = (short)7282;
unsigned int var_21 = 1380986124U;
short var_22 = (short)4962;
long long int var_23 = 7025104950226059120LL;
int var_24 = -120113883;
short arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (short)23125;
}

void checksum() {
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
