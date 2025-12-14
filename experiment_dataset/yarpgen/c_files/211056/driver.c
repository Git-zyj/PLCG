#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)41806;
_Bool var_3 = (_Bool)0;
int var_6 = 397981960;
unsigned short var_7 = (unsigned short)37108;
unsigned long long int var_9 = 12616888821043051492ULL;
unsigned int var_10 = 3132050222U;
unsigned char var_12 = (unsigned char)37;
unsigned char var_14 = (unsigned char)122;
int zero = 0;
short var_15 = (short)-4818;
signed char var_16 = (signed char)125;
unsigned long long int var_17 = 17150188745308939058ULL;
unsigned char var_18 = (unsigned char)32;
unsigned long long int var_19 = 851719386399706253ULL;
_Bool var_20 = (_Bool)1;
long long int var_21 = -7146751293621514475LL;
unsigned int var_22 = 2594112301U;
unsigned int var_23 = 4004132915U;
unsigned int var_24 = 440587095U;
signed char var_25 = (signed char)26;
_Bool var_26 = (_Bool)0;
signed char var_27 = (signed char)-11;
_Bool var_28 = (_Bool)1;
unsigned char arr_1 [16] ;
unsigned long long int arr_2 [16] ;
unsigned char arr_4 [16] [16] ;
unsigned long long int arr_6 [16] [16] ;
signed char arr_7 [16] [16] ;
_Bool arr_10 [16] [16] [16] [16] ;
short arr_13 [16] [16] [16] [16] [16] [16] [16] ;
int arr_14 [16] [16] [16] ;
unsigned long long int arr_16 [16] [16] [16] ;
long long int arr_17 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned char)108;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 15502940858280158231ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)249;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = 8512571714684621196ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-36;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 16; ++i_6) 
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)-32422;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = -503314404;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 16754474055239223499ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = 112366437687624024LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
