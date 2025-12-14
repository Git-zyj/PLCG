#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6484;
unsigned int var_1 = 894254212U;
unsigned char var_7 = (unsigned char)86;
short var_8 = (short)-29320;
unsigned int var_13 = 669837433U;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 424247939U;
signed char var_17 = (signed char)67;
int zero = 0;
unsigned char var_19 = (unsigned char)110;
unsigned short var_20 = (unsigned short)28926;
unsigned char var_21 = (unsigned char)194;
unsigned char var_22 = (unsigned char)38;
signed char var_23 = (signed char)99;
unsigned short var_24 = (unsigned short)20598;
_Bool var_25 = (_Bool)0;
unsigned char var_26 = (unsigned char)17;
unsigned int var_27 = 4190908394U;
unsigned short var_28 = (unsigned short)2392;
unsigned short arr_0 [25] ;
short arr_1 [25] [25] ;
unsigned long long int arr_2 [25] ;
long long int arr_5 [19] [19] ;
short arr_3 [25] [25] ;
unsigned short arr_7 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned short)9216;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (short)29529;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 16890213363297263942ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? -5719671451270691385LL : -5639497511860099275LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (short)5283;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned short)31450 : (unsigned short)8354;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
