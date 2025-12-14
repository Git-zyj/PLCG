#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9178565634902911288LL;
long long int var_3 = 6567421253474729990LL;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 1421431758U;
signed char var_8 = (signed char)-31;
_Bool var_10 = (_Bool)0;
unsigned int var_15 = 511570033U;
unsigned long long int var_17 = 7651779770690957105ULL;
int zero = 0;
unsigned int var_20 = 3441380572U;
unsigned long long int var_21 = 144828205625795379ULL;
signed char var_22 = (signed char)-124;
long long int var_23 = -6114173091288856017LL;
unsigned int var_24 = 2103344510U;
long long int var_25 = 3931226743768058760LL;
unsigned short var_26 = (unsigned short)10286;
unsigned int arr_0 [11] ;
unsigned int arr_1 [11] [11] ;
unsigned int arr_2 [11] ;
signed char arr_3 [11] ;
signed char arr_5 [11] ;
int arr_6 [11] [11] [11] ;
long long int arr_8 [11] [11] [11] ;
long long int arr_11 [18] ;
long long int arr_12 [18] ;
_Bool arr_19 [25] [25] ;
unsigned int arr_20 [25] ;
int arr_4 [11] [11] ;
int arr_9 [11] [11] [11] ;
unsigned long long int arr_10 [11] ;
unsigned int arr_13 [18] ;
long long int arr_14 [18] ;
unsigned int arr_15 [18] [18] ;
short arr_26 [25] [25] [25] [25] [25] [25] ;
short arr_27 [25] [25] [25] [25] ;
long long int arr_28 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 4098890993U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 281078098U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 1771731571U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (signed char)38;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (signed char)-45;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -1339302138;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -8986800949809598151LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = 5463477441782758125LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = 4165259997430487140LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_20 [i_0] = 3651477977U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = -590767095;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 765673185;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = 13497501008808501442ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = 1792517756U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = 923000499248287340LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_15 [i_0] [i_1] = 77367802U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (short)14529 : (short)738;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)-15033 : (short)23994;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? -7507700896018943982LL : 804390874852394913LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_27 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_28 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
