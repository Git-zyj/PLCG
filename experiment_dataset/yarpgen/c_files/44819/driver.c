#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)99;
long long int var_1 = -883140962279184380LL;
unsigned int var_2 = 2454313238U;
unsigned int var_3 = 1275166628U;
long long int var_4 = 8860890018157692578LL;
unsigned short var_5 = (unsigned short)168;
unsigned char var_6 = (unsigned char)184;
unsigned int var_7 = 3198249279U;
signed char var_8 = (signed char)-68;
unsigned short var_9 = (unsigned short)33959;
unsigned int var_10 = 429443248U;
unsigned int var_11 = 1737696267U;
int zero = 0;
unsigned short var_12 = (unsigned short)12708;
unsigned long long int var_13 = 11890094935414455944ULL;
unsigned char var_14 = (unsigned char)188;
long long int var_15 = 6440185505795764653LL;
unsigned int var_16 = 2527433392U;
unsigned short var_17 = (unsigned short)8914;
unsigned int arr_0 [23] [23] ;
unsigned int arr_1 [23] ;
long long int arr_2 [23] ;
int arr_3 [23] [23] ;
unsigned char arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 2853522657U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 1334044028U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = -6028632136373694950LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 1172829855;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (unsigned char)164;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
