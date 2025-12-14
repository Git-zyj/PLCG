#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5964193094761753373LL;
short var_4 = (short)-25119;
long long int var_5 = 4157095973730673750LL;
unsigned short var_8 = (unsigned short)33913;
int var_9 = -158472114;
unsigned short var_11 = (unsigned short)18288;
int var_13 = -748834021;
unsigned short var_15 = (unsigned short)20378;
int zero = 0;
int var_16 = 851885662;
_Bool var_17 = (_Bool)1;
long long int var_18 = 9093570323482673114LL;
unsigned long long int var_19 = 7149953457732760783ULL;
long long int var_20 = 1776629404272191150LL;
unsigned short var_21 = (unsigned short)38341;
short var_22 = (short)19280;
signed char var_23 = (signed char)-93;
long long int var_24 = -5495985613586836630LL;
_Bool var_25 = (_Bool)1;
long long int var_26 = -3549912221074203754LL;
short var_27 = (short)-19533;
unsigned short var_28 = (unsigned short)50754;
_Bool var_29 = (_Bool)0;
signed char arr_0 [22] ;
long long int arr_1 [22] ;
unsigned char arr_3 [13] ;
long long int arr_5 [13] ;
int arr_6 [13] [13] ;
unsigned short arr_8 [13] ;
signed char arr_11 [13] ;
_Bool arr_16 [13] [13] ;
short arr_17 [13] ;
unsigned long long int arr_28 [12] ;
int arr_18 [13] ;
long long int arr_19 [13] [13] ;
int arr_20 [13] ;
int arr_25 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (signed char)-121;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = -7935651837239778767LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned char)136;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = 3919512186566719708LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = -1487706815;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (unsigned short)10807;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = (signed char)101;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_16 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_17 [i_0] = (short)6963;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_28 [i_0] = 17418799242911186427ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 159032851 : 450608985;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? -5115188597956783977LL : 6066532735580669664LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_20 [i_0] = -624634891;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_25 [i_0] = -1129267344;
}

void checksum() {
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
