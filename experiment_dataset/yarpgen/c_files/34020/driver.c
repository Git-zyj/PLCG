#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)72;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-35;
signed char var_3 = (signed char)60;
short var_4 = (short)5934;
_Bool var_5 = (_Bool)0;
short var_6 = (short)23485;
unsigned char var_7 = (unsigned char)104;
unsigned char var_8 = (unsigned char)5;
unsigned long long int var_9 = 4654856127260800784ULL;
unsigned char var_10 = (unsigned char)15;
unsigned long long int var_11 = 14801526174177736544ULL;
long long int var_12 = 2899021626748290058LL;
signed char var_13 = (signed char)28;
signed char var_14 = (signed char)74;
unsigned short var_15 = (unsigned short)44235;
unsigned short var_16 = (unsigned short)60692;
long long int var_17 = -8436402668293313745LL;
int zero = 0;
unsigned char var_18 = (unsigned char)244;
unsigned char var_19 = (unsigned char)109;
long long int var_20 = -7361109211326354078LL;
int var_21 = 1464963446;
signed char var_22 = (signed char)-2;
unsigned long long int var_23 = 3971170316950773980ULL;
_Bool var_24 = (_Bool)0;
unsigned long long int var_25 = 11986638703343575231ULL;
signed char var_26 = (signed char)-125;
int var_27 = 521556025;
unsigned char var_28 = (unsigned char)104;
int var_29 = 296227475;
_Bool var_30 = (_Bool)1;
short var_31 = (short)12890;
long long int var_32 = -6242817851493297469LL;
unsigned int arr_0 [14] ;
_Bool arr_1 [14] ;
short arr_2 [14] [14] ;
unsigned char arr_3 [14] ;
short arr_4 [14] ;
int arr_5 [14] ;
short arr_6 [14] [14] ;
unsigned long long int arr_7 [14] ;
int arr_9 [14] ;
unsigned long long int arr_11 [14] [14] [14] [14] ;
signed char arr_12 [14] ;
signed char arr_15 [14] ;
unsigned char arr_10 [14] [14] [14] ;
unsigned char arr_16 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 3526209188U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)16225 : (short)4451;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)30 : (unsigned char)74;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (short)20496;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -295062909 : -2045074178;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (short)14883;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 16421781135346534286ULL : 15226394314985283129ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = -1996953541;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 15504699080363091840ULL : 3011857879097440606ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (signed char)90 : (signed char)12;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = (signed char)-44;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)224 : (unsigned char)219;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)154 : (unsigned char)7;
}

void checksum() {
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
