#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)1086;
unsigned short var_2 = (unsigned short)10850;
long long int var_3 = 4448936339223661329LL;
unsigned long long int var_4 = 495059388018187656ULL;
signed char var_5 = (signed char)85;
int var_7 = 1942412213;
unsigned long long int var_8 = 11001821348944716153ULL;
unsigned long long int var_9 = 14756558665427337191ULL;
signed char var_10 = (signed char)-41;
_Bool var_11 = (_Bool)0;
long long int var_13 = 2620270216690253805LL;
short var_14 = (short)15067;
short var_15 = (short)16247;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)61835;
int zero = 0;
int var_19 = 937202832;
unsigned short var_20 = (unsigned short)57454;
unsigned char var_21 = (unsigned char)57;
_Bool var_22 = (_Bool)1;
int var_23 = -417755740;
unsigned char var_24 = (unsigned char)72;
unsigned short var_25 = (unsigned short)3677;
long long int var_26 = 220908188943737862LL;
unsigned short arr_7 [22] [22] ;
unsigned long long int arr_11 [22] [22] [22] [22] ;
long long int arr_14 [22] ;
_Bool arr_15 [22] ;
_Bool arr_16 [22] [22] ;
long long int arr_23 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)34953 : (unsigned short)57009;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 9027604693231820760ULL : 15782913971109881271ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 7469546027417494477LL : 2369190007075180051LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? -2889766214882950857LL : 1706234070441124948LL;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
