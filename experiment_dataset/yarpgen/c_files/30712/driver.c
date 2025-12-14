#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 582967150504202183ULL;
long long int var_3 = 4713267101701541722LL;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)205;
int var_6 = 503551314;
int var_7 = -1315137172;
short var_8 = (short)-24389;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-763;
unsigned char var_12 = (unsigned char)220;
long long int var_13 = -8753788860914221095LL;
unsigned int var_16 = 1539521744U;
int zero = 0;
unsigned long long int var_20 = 487052056648554486ULL;
unsigned int var_21 = 2525663734U;
unsigned char var_22 = (unsigned char)220;
long long int var_23 = 2096161518223012889LL;
unsigned short var_24 = (unsigned short)52645;
unsigned int var_25 = 1568129803U;
long long int var_26 = -2823633152632268452LL;
long long int var_27 = 3420957035106816572LL;
long long int var_28 = 4041599611876131550LL;
unsigned char var_29 = (unsigned char)204;
unsigned long long int var_30 = 5105996378311278830ULL;
long long int var_31 = 4892788215575325331LL;
unsigned long long int var_32 = 5180964810058340808ULL;
unsigned char var_33 = (unsigned char)166;
unsigned long long int var_34 = 14043454763103588611ULL;
unsigned char var_35 = (unsigned char)12;
unsigned long long int arr_0 [16] ;
long long int arr_1 [16] ;
unsigned long long int arr_3 [16] [16] ;
long long int arr_5 [16] [16] [16] ;
int arr_8 [16] [16] [16] [16] ;
short arr_9 [16] [16] ;
long long int arr_11 [16] [16] [16] [16] ;
unsigned short arr_13 [16] [16] [16] [16] [16] [16] ;
long long int arr_15 [16] ;
long long int arr_16 [16] ;
short arr_18 [16] [16] [16] ;
int arr_19 [16] [16] ;
unsigned int arr_21 [16] ;
long long int arr_22 [16] [16] ;
unsigned char arr_25 [16] [16] ;
unsigned int arr_2 [16] ;
int arr_6 [16] ;
unsigned char arr_7 [16] [16] [16] ;
int arr_14 [16] [16] [16] [16] ;
unsigned short arr_17 [16] ;
int arr_23 [16] ;
long long int arr_28 [16] ;
unsigned long long int arr_32 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 17023018296017537365ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = -9213994338598041071LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = 7714609016399422305ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -658347219132416741LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = -743765953;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = (short)28061;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 2194087288241706100LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)46123;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_15 [i_0] = -5445138870967667937LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_16 [i_0] = 4878893721765680753LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (short)-19098;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_19 [i_0] [i_1] = -593483023;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_21 [i_0] = 846924069U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_22 [i_0] [i_1] = -6939507050665924061LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_25 [i_0] [i_1] = (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 1411290363U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = -1073703614;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)222;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 1671380144;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = (unsigned short)15574;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_23 [i_0] = -2085708902;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_28 [i_0] = 8351714333167180768LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_32 [i_0] = 857740861472037352ULL;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_32 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
