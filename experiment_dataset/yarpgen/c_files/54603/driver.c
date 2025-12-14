#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -415689524;
unsigned char var_2 = (unsigned char)192;
unsigned int var_3 = 3445144399U;
unsigned int var_4 = 356066953U;
unsigned short var_6 = (unsigned short)26655;
signed char var_7 = (signed char)-72;
_Bool var_8 = (_Bool)1;
short var_9 = (short)9785;
unsigned short var_10 = (unsigned short)15111;
int var_11 = 83638380;
unsigned int var_12 = 723801670U;
unsigned int var_13 = 3641226312U;
short var_14 = (short)-10426;
unsigned long long int var_15 = 15458255875391245944ULL;
unsigned short var_16 = (unsigned short)26251;
int zero = 0;
short var_18 = (short)21231;
_Bool var_19 = (_Bool)0;
int var_20 = 815256491;
unsigned char var_21 = (unsigned char)9;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)77;
unsigned short var_25 = (unsigned short)16881;
_Bool var_26 = (_Bool)1;
_Bool var_27 = (_Bool)0;
unsigned int var_28 = 1876965148U;
unsigned int var_29 = 347785645U;
unsigned int var_30 = 1845684358U;
signed char var_31 = (signed char)-93;
short var_32 = (short)-30704;
unsigned long long int var_33 = 7280115909180440191ULL;
unsigned long long int var_34 = 11876194308175822838ULL;
unsigned int var_35 = 2970025033U;
short var_36 = (short)18748;
int var_37 = 856048361;
_Bool var_38 = (_Bool)1;
unsigned short var_39 = (unsigned short)56364;
_Bool arr_0 [19] ;
unsigned int arr_1 [19] ;
int arr_4 [11] ;
unsigned long long int arr_14 [16] [16] [16] [16] [16] [16] ;
short arr_15 [16] [16] [16] [16] [16] ;
unsigned short arr_23 [16] ;
unsigned char arr_18 [16] [16] [16] [16] [16] ;
short arr_32 [16] ;
unsigned int arr_35 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 3648179782U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = -456746218;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? 15937474660528212904ULL : 13876240950625981595ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)827;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_23 [i_0] = (unsigned short)58408;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (unsigned char)35 : (unsigned char)7;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_32 [i_0] = (short)20720;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_35 [i_0] [i_1] = 18125404U;
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
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_35 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
