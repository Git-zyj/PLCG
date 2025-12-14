#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4718254729766127501ULL;
short var_2 = (short)8857;
unsigned char var_3 = (unsigned char)91;
short var_4 = (short)-13982;
long long int var_5 = 8759903437381164884LL;
long long int var_6 = -8686900233217223685LL;
unsigned char var_8 = (unsigned char)106;
unsigned short var_10 = (unsigned short)5170;
long long int var_12 = -6218010547598859592LL;
unsigned long long int var_13 = 226836812825208254ULL;
int var_14 = 1376107258;
int zero = 0;
_Bool var_16 = (_Bool)0;
int var_17 = -1441510215;
_Bool var_18 = (_Bool)0;
short var_19 = (short)5382;
short var_20 = (short)-21330;
unsigned char var_21 = (unsigned char)147;
signed char var_22 = (signed char)1;
short var_23 = (short)-20268;
short var_24 = (short)2911;
long long int var_25 = -4303534344617716191LL;
short var_26 = (short)27852;
unsigned char var_27 = (unsigned char)199;
long long int var_28 = -3711940972536102979LL;
unsigned short var_29 = (unsigned short)4747;
unsigned char var_30 = (unsigned char)94;
signed char var_31 = (signed char)83;
long long int var_32 = -5134224041899863632LL;
short var_33 = (short)19300;
_Bool var_34 = (_Bool)1;
unsigned char var_35 = (unsigned char)107;
short var_36 = (short)18115;
int var_37 = 1240562103;
unsigned long long int arr_0 [20] ;
short arr_1 [20] [20] ;
unsigned short arr_2 [20] ;
long long int arr_3 [20] [20] ;
unsigned char arr_4 [20] [20] [20] ;
int arr_6 [14] ;
unsigned long long int arr_8 [14] ;
unsigned char arr_10 [23] ;
short arr_11 [23] ;
unsigned long long int arr_12 [23] ;
unsigned short arr_13 [23] ;
long long int arr_17 [16] [16] [16] ;
unsigned char arr_16 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 5593635479370147783ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-16040;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)35917 : (unsigned short)24432;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = -3957737518894440202LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)3;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = 49005109;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = 10970140716366215937ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (unsigned char)33;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (short)9382;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = 5079028126561262916ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (unsigned short)35492;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 6393925024567995753LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_16 [i_0] = (unsigned char)196;
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
