#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32593;
unsigned char var_1 = (unsigned char)46;
short var_2 = (short)-24326;
unsigned int var_4 = 2074288828U;
signed char var_5 = (signed char)74;
unsigned long long int var_6 = 13175901428626853845ULL;
unsigned short var_7 = (unsigned short)54564;
unsigned long long int var_8 = 16609068287812686543ULL;
signed char var_10 = (signed char)-113;
long long int var_11 = -8420452786857721053LL;
unsigned int var_12 = 2668979826U;
_Bool var_15 = (_Bool)1;
int zero = 0;
short var_16 = (short)-15686;
short var_17 = (short)9944;
long long int var_18 = 6069845124142498344LL;
unsigned char var_19 = (unsigned char)224;
unsigned int var_20 = 1839372391U;
short var_21 = (short)10126;
unsigned int var_22 = 118013983U;
long long int var_23 = -4536944057784016802LL;
long long int var_24 = 7570638141880894055LL;
int var_25 = -644670671;
unsigned char var_26 = (unsigned char)192;
signed char var_27 = (signed char)101;
unsigned int var_28 = 238543810U;
unsigned short arr_0 [16] [16] ;
signed char arr_1 [16] ;
long long int arr_2 [16] ;
_Bool arr_4 [16] [16] ;
unsigned int arr_7 [16] [16] ;
signed char arr_12 [22] [22] ;
short arr_13 [22] ;
long long int arr_15 [17] ;
unsigned long long int arr_3 [16] [16] ;
unsigned long long int arr_6 [16] [16] [16] ;
unsigned short arr_9 [16] [16] ;
long long int arr_10 [16] ;
signed char arr_14 [22] ;
unsigned long long int arr_22 [16] ;
long long int arr_23 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)61039 : (unsigned short)55234;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (signed char)-126;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 1020884886921914205LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? 1169856431U : 3150226425U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)18;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (short)-2783;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = 3234278116691771081LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 17650769158994333840ULL : 13440536270993052661ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 9134347122622517108ULL : 1813044631879526271ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)48879 : (unsigned short)48777;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? -7608298609750387710LL : -1114035748060154582LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (signed char)73;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_22 [i_0] = 12275570062622568203ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_23 [i_0] = 3201869188263799130LL;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
