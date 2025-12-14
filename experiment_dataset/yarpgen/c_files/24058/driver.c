#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = -1050610996;
signed char var_2 = (signed char)62;
signed char var_4 = (signed char)-63;
signed char var_5 = (signed char)-79;
unsigned short var_6 = (unsigned short)58583;
_Bool var_8 = (_Bool)1;
int var_9 = 1262416018;
long long int var_10 = 5557397410336758048LL;
_Bool var_11 = (_Bool)1;
long long int var_12 = -2606128285397611919LL;
short var_13 = (short)-8488;
signed char var_14 = (signed char)-85;
signed char var_15 = (signed char)27;
signed char var_16 = (signed char)-95;
unsigned int var_17 = 2338740677U;
long long int var_18 = -7643364605406495168LL;
unsigned char var_19 = (unsigned char)182;
int zero = 0;
unsigned int var_20 = 2667448095U;
unsigned char var_21 = (unsigned char)96;
signed char var_22 = (signed char)65;
unsigned char var_23 = (unsigned char)21;
unsigned int var_24 = 47738618U;
unsigned short var_25 = (unsigned short)7849;
long long int var_26 = 6829239058305982440LL;
_Bool var_27 = (_Bool)1;
unsigned short var_28 = (unsigned short)50795;
unsigned long long int var_29 = 16091769669127544113ULL;
long long int var_30 = 4249531872927831756LL;
signed char var_31 = (signed char)17;
unsigned long long int var_32 = 10108413343878570162ULL;
unsigned int var_33 = 868886496U;
unsigned short var_34 = (unsigned short)57466;
unsigned char var_35 = (unsigned char)78;
int var_36 = -242137662;
int var_37 = 913821713;
signed char arr_1 [25] ;
_Bool arr_2 [25] ;
int arr_4 [25] [25] [25] ;
int arr_5 [25] [25] ;
unsigned char arr_7 [25] [25] [25] ;
int arr_8 [25] [25] [25] ;
signed char arr_13 [25] [25] ;
long long int arr_17 [12] ;
int arr_3 [25] ;
_Bool arr_6 [25] [25] [25] ;
short arr_15 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (signed char)-36;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -919893993;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = -1688840963;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)18;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -1733345115;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_13 [i_0] [i_1] = (signed char)-89;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 7087009188582617269LL : 5279991616201353594LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 1491658649;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (short)-16885;
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
    hash(&seed, var_36);
    hash(&seed, var_37);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
