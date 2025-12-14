#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3573440655388608336ULL;
unsigned long long int var_1 = 14521266622500352209ULL;
unsigned short var_3 = (unsigned short)48611;
int var_5 = -179339290;
long long int var_7 = 4511023268083514009LL;
long long int var_8 = 4020855369822087269LL;
signed char var_10 = (signed char)-10;
unsigned char var_11 = (unsigned char)111;
unsigned long long int var_12 = 4487357199877528754ULL;
int var_13 = 1032279402;
signed char var_14 = (signed char)72;
unsigned char var_15 = (unsigned char)73;
int zero = 0;
long long int var_16 = -1806432792312149041LL;
unsigned short var_17 = (unsigned short)2754;
unsigned long long int var_18 = 3202398264574130927ULL;
_Bool var_19 = (_Bool)0;
long long int var_20 = -5962818266106446063LL;
unsigned short var_21 = (unsigned short)51529;
long long int arr_0 [11] [11] ;
unsigned char arr_1 [11] ;
signed char arr_2 [11] ;
signed char arr_3 [11] ;
int arr_4 [11] [11] [11] ;
long long int arr_5 [11] [11] [11] ;
long long int arr_6 [11] [11] ;
unsigned char arr_7 [11] [11] [11] [11] ;
long long int arr_8 [11] [11] [11] ;
int arr_9 [11] ;
_Bool arr_10 [11] [11] [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 274494669192551149LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)241;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (signed char)4;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)64 : (signed char)106;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 94904331;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -4307342223800342931LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 7570812532973423195LL : -8083943124292434204LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned char)9;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -5633496575977728523LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = -849087616;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
