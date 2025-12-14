#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_2 = (_Bool)1;
signed char var_5 = (signed char)26;
long long int var_6 = 6829268950677111250LL;
int var_9 = -1471097324;
long long int var_10 = 7350379579412696580LL;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)61485;
unsigned char var_13 = (unsigned char)163;
unsigned long long int var_14 = 16818506403456059034ULL;
int var_15 = 617424476;
unsigned long long int var_16 = 10068774795137400729ULL;
int var_17 = 1572667691;
int var_18 = -1615037129;
unsigned long long int var_19 = 12246486534151078811ULL;
signed char var_20 = (signed char)-60;
unsigned long long int arr_0 [24] [24] ;
unsigned short arr_2 [24] ;
unsigned short arr_3 [24] ;
unsigned char arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 10501896179369127893ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned short)28713;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned short)57005;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)31 : (unsigned char)97;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
