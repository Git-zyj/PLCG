#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7714626270421605213LL;
unsigned char var_4 = (unsigned char)209;
unsigned int var_7 = 3476971148U;
unsigned long long int var_9 = 7805195850377118329ULL;
unsigned int var_11 = 2874383638U;
_Bool var_12 = (_Bool)1;
unsigned long long int var_14 = 1479181172552089985ULL;
int zero = 0;
signed char var_17 = (signed char)108;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 15141605969910415400ULL;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 309718622U;
long long int var_22 = 72465316837074137LL;
unsigned long long int var_23 = 2418847620479629435ULL;
unsigned int arr_0 [17] [17] ;
long long int arr_1 [17] ;
unsigned short arr_2 [17] ;
int arr_4 [14] ;
unsigned short arr_6 [14] ;
unsigned short arr_3 [17] [17] ;
unsigned char arr_7 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 423107793U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 2114756554824460472LL : 6273769627238416263LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned short)52716;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 1365916674;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (unsigned short)18039;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)63447 : (unsigned short)32512;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (unsigned char)39;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
