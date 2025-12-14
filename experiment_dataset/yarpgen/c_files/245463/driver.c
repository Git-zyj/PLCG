#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 919455937250012877LL;
unsigned short var_1 = (unsigned short)7172;
long long int var_2 = -1918831203882020239LL;
unsigned int var_3 = 1737652681U;
long long int var_4 = -1595529455084422985LL;
unsigned int var_5 = 2449505607U;
unsigned short var_7 = (unsigned short)10965;
unsigned short var_8 = (unsigned short)65009;
unsigned int var_9 = 3556232959U;
unsigned short var_10 = (unsigned short)1363;
unsigned short var_11 = (unsigned short)39820;
unsigned short var_12 = (unsigned short)25063;
long long int var_13 = 1263349840943323527LL;
long long int var_14 = -5423801843136755240LL;
int zero = 0;
unsigned short var_15 = (unsigned short)17212;
long long int var_16 = -9111790790372903731LL;
long long int var_17 = -2951944272936914349LL;
unsigned int var_18 = 987076477U;
unsigned int var_19 = 2830806125U;
long long int var_20 = -3138501133785843459LL;
long long int var_21 = 7868076471780321996LL;
long long int var_22 = 3154314867903498977LL;
long long int var_23 = 8730324674744668500LL;
long long int arr_2 [15] ;
unsigned int arr_5 [15] ;
unsigned short arr_6 [15] ;
unsigned int arr_7 [15] [15] ;
long long int arr_10 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 4709912215221973990LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 1956634706U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (unsigned short)52894;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = 4118572881U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 4649224303607720862LL : 4683920531214347398LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
