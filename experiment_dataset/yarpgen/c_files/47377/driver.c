#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5260;
unsigned char var_1 = (unsigned char)57;
unsigned long long int var_2 = 8507716003628812651ULL;
long long int var_3 = 7509255065834465667LL;
int var_4 = 1862074420;
unsigned short var_5 = (unsigned short)41570;
unsigned int var_6 = 2532364562U;
short var_9 = (short)32293;
int var_10 = 1399031102;
int var_11 = -1013893999;
unsigned int var_12 = 2384982223U;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
int var_16 = -1755907204;
int zero = 0;
unsigned int var_17 = 2000732487U;
short var_18 = (short)-5452;
unsigned int var_19 = 3377715968U;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)25612;
signed char var_22 = (signed char)-74;
int var_23 = 585126676;
int var_24 = 1269600032;
unsigned long long int arr_3 [14] ;
long long int arr_4 [14] ;
unsigned int arr_9 [25] ;
unsigned long long int arr_15 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 11473133258296673964ULL : 2112856564702766753ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 726687231843845347LL : -2655966738308498042LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = 4189849945U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_15 [i_0] [i_1] = 16328608199256818751ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
