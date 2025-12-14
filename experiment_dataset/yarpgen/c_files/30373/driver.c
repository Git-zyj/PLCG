#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)218;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)135;
unsigned long long int var_3 = 8236934839270387545ULL;
unsigned char var_4 = (unsigned char)156;
unsigned int var_5 = 957917619U;
unsigned short var_6 = (unsigned short)16145;
signed char var_7 = (signed char)53;
unsigned int var_8 = 3741264598U;
short var_9 = (short)-14568;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-17;
unsigned int var_14 = 2517747164U;
signed char var_15 = (signed char)(-127 - 1);
_Bool var_16 = (_Bool)1;
short var_17 = (short)-8863;
unsigned int var_18 = 3539609065U;
int zero = 0;
short var_19 = (short)3812;
unsigned int var_20 = 3990590975U;
unsigned int var_21 = 316349275U;
int var_22 = 1480246376;
unsigned int var_23 = 2816770145U;
int var_24 = 1660802536;
int var_25 = -1152462768;
unsigned char var_26 = (unsigned char)237;
short var_27 = (short)-6565;
unsigned short var_28 = (unsigned short)10236;
unsigned int var_29 = 81039113U;
_Bool var_30 = (_Bool)0;
unsigned int var_31 = 2367608193U;
int var_32 = -181279021;
int var_33 = -311515108;
signed char var_34 = (signed char)-90;
signed char var_35 = (signed char)-57;
_Bool var_36 = (_Bool)1;
unsigned int var_37 = 604837007U;
unsigned int var_38 = 3563065740U;
unsigned int var_39 = 71668212U;
unsigned char var_40 = (unsigned char)143;
unsigned long long int arr_3 [15] ;
unsigned char arr_8 [15] [15] ;
short arr_20 [15] ;
unsigned char arr_27 [10] ;
unsigned int arr_28 [10] ;
short arr_35 [10] ;
_Bool arr_36 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 14767885266869734979ULL : 10141076746103394907ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)141 : (unsigned char)229;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (short)15891 : (short)-2898;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_27 [i_0] = (unsigned char)94;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_28 [i_0] = 2190333701U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_35 [i_0] = (short)414;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_36 [i_0] = (_Bool)0;
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
    hash(&seed, var_40);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_35 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_36 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
