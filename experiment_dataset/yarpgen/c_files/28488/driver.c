#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9755468625313696599ULL;
signed char var_3 = (signed char)48;
int var_6 = 1599931413;
unsigned int var_7 = 4031962631U;
unsigned short var_8 = (unsigned short)59888;
unsigned long long int var_9 = 10584937286697553408ULL;
short var_13 = (short)-22839;
int zero = 0;
int var_14 = 673038431;
signed char var_15 = (signed char)-66;
signed char var_16 = (signed char)106;
unsigned char var_17 = (unsigned char)78;
long long int var_18 = -5586177875281087220LL;
int var_19 = 398182791;
signed char var_20 = (signed char)104;
unsigned short var_21 = (unsigned short)32940;
short var_22 = (short)1802;
short var_23 = (short)-4950;
long long int var_24 = 5592118345990819117LL;
long long int var_25 = -5725550329741657002LL;
unsigned long long int var_26 = 13471952456572054722ULL;
unsigned short var_27 = (unsigned short)51637;
int var_28 = 483512415;
unsigned char var_29 = (unsigned char)216;
unsigned int var_30 = 1714710533U;
short arr_0 [15] ;
signed char arr_1 [15] ;
int arr_2 [10] [10] ;
unsigned short arr_3 [10] ;
unsigned char arr_7 [11] [11] [11] ;
unsigned int arr_9 [11] [11] ;
unsigned char arr_12 [11] ;
long long int arr_13 [11] [11] ;
int arr_10 [11] ;
unsigned int arr_11 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (short)28807;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (signed char)9;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = -473239893;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned short)44505;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? 1719268438U : 2555249654U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = (unsigned char)161;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_13 [i_0] [i_1] = -6140544371956987138LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? -1269227731 : -1096094235;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = 2607202786U;
}

void checksum() {
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
