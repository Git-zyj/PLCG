#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1439080549211263474LL;
unsigned int var_1 = 45646716U;
long long int var_4 = -8167354856273026739LL;
unsigned int var_6 = 4105897032U;
unsigned short var_8 = (unsigned short)63596;
unsigned long long int var_9 = 12630804596375019907ULL;
long long int var_13 = 1906384054753017310LL;
long long int var_14 = -6541675545888964063LL;
int var_15 = -2139563469;
int zero = 0;
unsigned short var_19 = (unsigned short)56996;
signed char var_20 = (signed char)-16;
unsigned int var_21 = 2559598606U;
unsigned int var_22 = 533605629U;
signed char var_23 = (signed char)21;
unsigned int arr_1 [19] ;
unsigned char arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 471132622U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (unsigned char)151;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
