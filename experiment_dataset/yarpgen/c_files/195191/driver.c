#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12574933744391196331ULL;
long long int var_7 = 1973956391180787254LL;
long long int var_8 = 3136939516796509185LL;
short var_12 = (short)-31194;
unsigned int var_15 = 1705180158U;
int var_16 = -260548681;
int var_17 = 1086286656;
short var_18 = (short)-31366;
int zero = 0;
short var_20 = (short)12169;
int var_21 = 658804574;
unsigned char var_22 = (unsigned char)88;
unsigned char var_23 = (unsigned char)139;
short arr_4 [19] [19] ;
unsigned long long int arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-17052;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 15414003506888228552ULL : 11696336545757117623ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
