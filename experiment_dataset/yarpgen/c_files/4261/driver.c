#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)111;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
int var_5 = -1069918230;
signed char var_6 = (signed char)124;
signed char var_9 = (signed char)46;
signed char var_11 = (signed char)31;
unsigned short var_12 = (unsigned short)26332;
unsigned long long int var_14 = 7413837082325190832ULL;
short var_15 = (short)15028;
_Bool var_16 = (_Bool)1;
int zero = 0;
int var_17 = -1384668545;
unsigned char var_18 = (unsigned char)181;
unsigned short var_19 = (unsigned short)27603;
signed char var_20 = (signed char)-59;
unsigned int var_21 = 2449138181U;
int var_22 = 1933209704;
_Bool var_23 = (_Bool)0;
long long int var_24 = -2622447931028981285LL;
_Bool arr_0 [19] ;
short arr_1 [19] [19] ;
unsigned short arr_4 [19] ;
_Bool arr_5 [19] [19] ;
long long int arr_22 [19] [19] [19] [19] [19] [19] [19] ;
unsigned long long int arr_2 [19] ;
unsigned long long int arr_3 [19] ;
unsigned int arr_7 [19] ;
signed char arr_24 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-22606 : (short)-10094;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)23854 : (unsigned short)30358;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 19; ++i_6) 
                                arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = -1348332529605686258LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 381058525266921475ULL : 12449507021276694857ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 7053948199645280128ULL : 17285034262557605394ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 354645323U : 1787766338U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_24 [i_0] = (signed char)27;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_24 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
