#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20024;
int var_1 = 1593147094;
int var_3 = -1834343672;
int var_5 = -1953459316;
unsigned char var_7 = (unsigned char)250;
unsigned long long int var_8 = 1910019250838033226ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)28658;
_Bool var_15 = (_Bool)1;
int var_16 = -703921244;
unsigned int var_17 = 1180643608U;
unsigned short var_18 = (unsigned short)38521;
short var_19 = (short)1918;
unsigned short var_20 = (unsigned short)30691;
unsigned char var_21 = (unsigned char)211;
signed char var_22 = (signed char)112;
int var_23 = -2032694630;
unsigned char var_24 = (unsigned char)217;
int var_25 = 483050803;
unsigned short var_26 = (unsigned short)53055;
unsigned short arr_1 [12] ;
long long int arr_2 [12] ;
unsigned char arr_3 [11] ;
long long int arr_8 [11] ;
short arr_9 [11] [11] ;
signed char arr_10 [11] [11] [11] ;
unsigned long long int arr_11 [11] [11] ;
unsigned long long int arr_13 [11] [11] [11] [11] ;
long long int arr_14 [11] [11] [11] [11] [11] [11] ;
unsigned short arr_16 [11] [11] [11] ;
int arr_22 [11] ;
short arr_23 [23] ;
unsigned short arr_24 [23] [23] ;
long long int arr_18 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned short)7105;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 2300984467314281467LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned char)167;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? -1767084056374794920LL : -3815655584911876232LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = (short)-9579;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-102 : (signed char)7;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_11 [i_0] [i_1] = 3640921130003089451ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 15821717377391000095ULL : 12003923327622754961ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -8455409358558779911LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (unsigned short)9393;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_22 [i_0] = -2106866085;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_23 [i_0] = (short)-8726;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_24 [i_0] [i_1] = (unsigned short)41039;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_18 [i_0] [i_1] = 194976472999470228LL;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
