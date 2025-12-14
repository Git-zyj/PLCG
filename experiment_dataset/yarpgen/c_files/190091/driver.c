#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)117;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
unsigned short var_6 = (unsigned short)691;
int var_8 = -913710035;
signed char var_9 = (signed char)-60;
short var_10 = (short)-2432;
unsigned int var_11 = 2593572086U;
signed char var_13 = (signed char)-103;
long long int var_14 = -8564801836916105887LL;
_Bool var_15 = (_Bool)0;
long long int var_16 = -3472736985837937309LL;
long long int var_17 = 2726288774278825702LL;
long long int var_18 = -285010246220204387LL;
signed char var_19 = (signed char)-3;
int zero = 0;
signed char var_20 = (signed char)-102;
long long int var_21 = 5016615334996090565LL;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 1955157846U;
long long int var_24 = 7971628791287655309LL;
long long int var_25 = -7914703344895550719LL;
long long int var_26 = -8002720108240360798LL;
unsigned short var_27 = (unsigned short)44509;
unsigned char var_28 = (unsigned char)147;
unsigned char arr_0 [23] ;
_Bool arr_1 [23] ;
unsigned char arr_3 [25] [25] ;
short arr_4 [25] ;
unsigned short arr_5 [25] ;
long long int arr_6 [25] ;
_Bool arr_8 [25] [25] ;
unsigned short arr_11 [25] [25] [25] ;
unsigned int arr_13 [25] [25] ;
long long int arr_15 [25] ;
_Bool arr_16 [25] [25] ;
_Bool arr_17 [25] [25] [25] [25] ;
int arr_19 [25] [25] [25] [25] [25] [25] ;
short arr_20 [25] [25] [25] [25] [25] ;
unsigned long long int arr_2 [23] ;
unsigned short arr_7 [25] ;
signed char arr_10 [25] ;
unsigned int arr_21 [25] ;
unsigned int arr_22 [25] ;
signed char arr_25 [12] [12] ;
unsigned long long int arr_26 [12] [12] ;
unsigned int arr_27 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned char)230;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)71;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (short)-22184;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (unsigned short)32675;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = -1049769951831653447LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)44436;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_13 [i_0] [i_1] = 3457070664U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_15 [i_0] = -4375425835663314965LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_16 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -922409059;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)31315;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 18283536686758391951ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (unsigned short)11510;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (signed char)67;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_21 [i_0] = 3262331206U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_22 [i_0] = 2198130638U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_25 [i_0] [i_1] = (signed char)111;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_26 [i_0] [i_1] = 8724640880609565995ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_27 [i_0] = 4178546432U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_27 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
