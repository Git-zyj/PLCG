#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1738984985;
int var_2 = -535026515;
unsigned long long int var_3 = 9694347258795105360ULL;
short var_6 = (short)17524;
unsigned long long int var_7 = 8351271967424551786ULL;
long long int var_9 = -2761289551428615322LL;
unsigned short var_10 = (unsigned short)38015;
int var_11 = -1546776367;
int zero = 0;
unsigned long long int var_12 = 10363709794200112171ULL;
unsigned long long int var_13 = 5856380939145362554ULL;
signed char var_14 = (signed char)125;
_Bool var_15 = (_Bool)0;
unsigned int arr_0 [19] ;
unsigned long long int arr_1 [19] ;
unsigned long long int arr_3 [19] [19] ;
int arr_12 [19] ;
short arr_10 [19] [19] [19] [19] [19] ;
unsigned short arr_11 [19] ;
short arr_17 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 2622146337U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 10469305920410463659ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = 4576764837339089766ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = 334456996;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (short)4806 : (short)-27722;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (unsigned short)26880;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (short)-23582 : (short)-31751;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
