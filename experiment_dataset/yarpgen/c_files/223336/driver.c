#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1720589071;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)239;
short var_10 = (short)1414;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 7540732647708205065ULL;
int var_16 = -1932173277;
unsigned char var_17 = (unsigned char)44;
long long int var_18 = 6675874338448477838LL;
int var_19 = -876405737;
int var_20 = 2117605405;
short var_21 = (short)-31909;
long long int var_22 = 7634413416108462579LL;
short var_23 = (short)-7371;
long long int arr_0 [20] [20] ;
long long int arr_1 [20] ;
unsigned long long int arr_2 [20] ;
long long int arr_3 [20] ;
short arr_4 [20] ;
unsigned long long int arr_8 [22] ;
signed char arr_9 [22] [22] ;
unsigned long long int arr_5 [20] ;
long long int arr_6 [20] [20] ;
unsigned int arr_7 [20] ;
long long int arr_14 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? -1067434803292873347LL : 5447545091404259362LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = -5627306735880068740LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 9274836264264787215ULL : 5234965822634890587ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -4902088743591184669LL : -8032988096957283286LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)-8367 : (short)-21874;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = 14218696859506185345ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)84;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 5666138096238958029ULL : 1685249799225199387ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? -2279900094264851495LL : 3967637378994265180LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 3035788833U : 3319340925U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? -473111953023948589LL : 5212800300951820688LL;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
