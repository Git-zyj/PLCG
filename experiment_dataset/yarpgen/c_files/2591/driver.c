#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)65;
long long int var_2 = 5991515319640499647LL;
short var_3 = (short)16490;
_Bool var_4 = (_Bool)1;
long long int var_6 = 1387245303706354017LL;
_Bool var_7 = (_Bool)1;
long long int var_8 = -3320253934810989219LL;
unsigned long long int var_9 = 15057053354458920534ULL;
short var_10 = (short)-4740;
signed char var_11 = (signed char)5;
long long int var_12 = 3968301432322235653LL;
unsigned int var_13 = 3748732125U;
long long int var_14 = 953590476866087261LL;
long long int var_15 = 7897785872778433016LL;
unsigned int var_16 = 1427520153U;
int zero = 0;
unsigned int var_17 = 2036951817U;
_Bool var_18 = (_Bool)0;
long long int var_19 = 4372226814588695717LL;
long long int var_20 = -8621078391670943805LL;
signed char var_21 = (signed char)50;
long long int arr_1 [18] [18] ;
_Bool arr_3 [18] [18] [18] ;
unsigned int arr_5 [18] [18] [18] ;
long long int arr_7 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = -4978069888662966877LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 834264216U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? 2997372930362756217LL : -2211127485513387532LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
