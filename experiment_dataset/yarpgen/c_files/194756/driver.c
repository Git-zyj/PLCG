#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-11;
unsigned short var_1 = (unsigned short)35108;
unsigned long long int var_5 = 5537403836957544921ULL;
unsigned long long int var_6 = 17852070418755174760ULL;
unsigned long long int var_8 = 637055379006158812ULL;
unsigned long long int var_9 = 5749398585272724967ULL;
unsigned short var_10 = (unsigned short)25221;
short var_11 = (short)17745;
unsigned short var_12 = (unsigned short)27083;
int var_14 = 1217189874;
int zero = 0;
signed char var_16 = (signed char)21;
unsigned short var_17 = (unsigned short)7311;
unsigned short var_18 = (unsigned short)18062;
short var_19 = (short)10726;
unsigned long long int var_20 = 5555983373872984869ULL;
int var_21 = -1686967701;
unsigned short var_22 = (unsigned short)25434;
unsigned short var_23 = (unsigned short)39221;
unsigned long long int var_24 = 9929973960580057198ULL;
unsigned long long int var_25 = 12661079450365410612ULL;
long long int var_26 = 8223190177267742367LL;
short var_27 = (short)-21822;
short var_28 = (short)-4083;
unsigned char arr_0 [21] [21] ;
unsigned short arr_1 [21] ;
unsigned long long int arr_2 [19] ;
unsigned long long int arr_3 [19] [19] ;
unsigned short arr_4 [19] ;
long long int arr_5 [19] ;
unsigned long long int arr_6 [19] [19] ;
signed char arr_10 [15] [15] ;
short arr_11 [15] ;
short arr_12 [15] ;
short arr_15 [12] [12] ;
unsigned long long int arr_16 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)124;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)478;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 3538511245332853998ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = 13496843860028545627ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (unsigned short)50950;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = -5353341498556512892LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = 5133533606216950851ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)74;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = (short)-26541;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = (short)31735;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)26885 : (short)6265;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_16 [i_0] [i_1] = (i_1 % 2 == 0) ? 4710981437993996212ULL : 6532095304835863313ULL;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
