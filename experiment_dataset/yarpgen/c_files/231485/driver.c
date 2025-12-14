#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1249895871;
_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
int var_6 = -662507097;
_Bool var_7 = (_Bool)1;
long long int var_9 = -2773483203272358594LL;
int var_11 = 2056568768;
long long int var_12 = 5441055689439285172LL;
int zero = 0;
int var_13 = 197534791;
long long int var_14 = 4610463277546694220LL;
long long int var_15 = -9129483674621132022LL;
short var_16 = (short)-1997;
short var_17 = (short)23990;
_Bool var_18 = (_Bool)1;
long long int var_19 = -3650777321535266928LL;
_Bool var_20 = (_Bool)1;
long long int var_21 = -6482001609399364929LL;
int var_22 = 43219076;
_Bool var_23 = (_Bool)1;
_Bool var_24 = (_Bool)0;
long long int var_25 = 2096502702405810750LL;
short var_26 = (short)-505;
unsigned char var_27 = (unsigned char)5;
_Bool arr_1 [22] ;
unsigned short arr_2 [22] ;
int arr_5 [22] ;
unsigned char arr_7 [22] [22] [22] ;
int arr_8 [22] [22] [22] ;
int arr_12 [22] [22] [22] [22] ;
unsigned short arr_17 [22] [22] [22] [22] [22] ;
long long int arr_3 [22] ;
int arr_4 [22] ;
long long int arr_9 [22] ;
short arr_22 [22] [22] [22] [22] [22] [22] [22] ;
long long int arr_26 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned short)27917;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = -923281905;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)251;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 1965415175;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = -1622387430;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)45749;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 1120104033066641811LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 1912108350;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = -7170331533263856158LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_6 % 2 == 0) ? (short)-14637 : (short)13005;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_26 [i_0] [i_1] = -2340323838428957537LL;
}

void checksum() {
    hash(&seed, var_13);
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
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
