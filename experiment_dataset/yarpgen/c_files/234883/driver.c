#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3151047307113656079ULL;
long long int var_1 = 1865970471266001773LL;
unsigned short var_2 = (unsigned short)26200;
unsigned short var_3 = (unsigned short)28577;
unsigned int var_4 = 2767416841U;
unsigned short var_5 = (unsigned short)63153;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)16;
unsigned int var_8 = 214025172U;
unsigned char var_9 = (unsigned char)188;
unsigned short var_10 = (unsigned short)54108;
long long int var_11 = 8403118732535823738LL;
unsigned long long int var_12 = 12569790458238515448ULL;
int zero = 0;
signed char var_13 = (signed char)-23;
long long int var_14 = 4292211018426543297LL;
unsigned short var_15 = (unsigned short)54931;
unsigned short var_16 = (unsigned short)50188;
int var_17 = -54969722;
signed char var_18 = (signed char)106;
unsigned long long int var_19 = 13719842682683691009ULL;
long long int var_20 = -5519961137150641877LL;
unsigned int var_21 = 2221868527U;
unsigned short var_22 = (unsigned short)9487;
unsigned long long int var_23 = 16792987956482721517ULL;
signed char var_24 = (signed char)36;
unsigned int var_25 = 3699209903U;
int var_26 = 1891672277;
long long int var_27 = -4518059547896633109LL;
unsigned short arr_11 [24] [24] ;
unsigned long long int arr_18 [23] ;
unsigned int arr_21 [21] ;
unsigned short arr_26 [21] [21] [21] ;
long long int arr_32 [21] [21] [21] [21] [21] [21] ;
int arr_37 [18] [18] ;
long long int arr_38 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)45900 : (unsigned short)58443;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_18 [i_0] = 5359123360134008105ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_21 [i_0] = 1916643311U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (unsigned short)49191;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -8608548650122719877LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_37 [i_0] [i_1] = -1346350558;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_38 [i_0] [i_1] = 528084820360998250LL;
}

void checksum() {
    hash(&seed, var_13);
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_26 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            hash(&seed, arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_37 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_38 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
