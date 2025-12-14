#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6636452255521900754LL;
unsigned long long int var_1 = 7373925195818767948ULL;
short var_4 = (short)9195;
short var_5 = (short)-14491;
unsigned short var_6 = (unsigned short)64014;
long long int var_7 = 5009246746693217357LL;
unsigned short var_8 = (unsigned short)41925;
short var_9 = (short)3317;
unsigned char var_10 = (unsigned char)214;
int zero = 0;
unsigned char var_14 = (unsigned char)37;
short var_15 = (short)12626;
unsigned long long int var_16 = 7511474662550329248ULL;
long long int var_17 = 3588657382519847249LL;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-7149;
_Bool var_21 = (_Bool)1;
short var_22 = (short)-24081;
int var_23 = -664089605;
_Bool var_24 = (_Bool)1;
long long int var_25 = 2447431812074670420LL;
int var_26 = 378082183;
unsigned short arr_0 [24] ;
unsigned long long int arr_1 [24] [24] ;
unsigned short arr_2 [24] ;
unsigned char arr_5 [10] ;
signed char arr_7 [17] [17] ;
unsigned long long int arr_11 [17] ;
long long int arr_16 [17] ;
int arr_17 [17] ;
unsigned short arr_3 [24] ;
long long int arr_6 [10] ;
long long int arr_15 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned short)37388;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 18116109841087476590ULL : 10753979420213394162ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)5121 : (unsigned short)40828;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (unsigned char)237;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-109;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = 10848955074568411914ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = -7821438607320516967LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_17 [i_0] = -2105490087;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)10615 : (unsigned short)14212;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 5664828102547282038LL : -1089288834498324082LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = -828902781029054426LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
