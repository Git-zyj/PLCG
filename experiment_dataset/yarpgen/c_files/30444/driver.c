#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)168;
unsigned long long int var_1 = 14160885702096688449ULL;
signed char var_2 = (signed char)81;
int var_3 = -492219908;
unsigned long long int var_8 = 6264792485925598842ULL;
unsigned int var_9 = 1217913418U;
unsigned long long int var_12 = 4667180328021633874ULL;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)23472;
int zero = 0;
long long int var_15 = -8911006785715188423LL;
unsigned long long int var_16 = 18006821339773886520ULL;
long long int var_17 = 6914688196996983837LL;
long long int var_18 = -362552828911147800LL;
unsigned char var_19 = (unsigned char)115;
int var_20 = 1384683768;
long long int var_21 = 5285668801933552830LL;
unsigned int var_22 = 591104633U;
unsigned char arr_0 [17] [17] ;
int arr_1 [17] ;
short arr_2 [17] [17] ;
long long int arr_3 [17] ;
short arr_4 [17] ;
unsigned short arr_5 [17] ;
unsigned short arr_8 [14] ;
int arr_9 [14] ;
long long int arr_15 [19] ;
int arr_16 [19] ;
long long int arr_17 [19] ;
short arr_6 [17] [17] [17] ;
long long int arr_7 [17] [17] ;
unsigned short arr_14 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)107;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = -1546718116;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (short)20516;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 7452111146998323149LL : 1361026059765219336LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)11722 : (short)-6853;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (unsigned short)36084;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (unsigned short)39369;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = 70652177;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = 4894146168463980507LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_16 [i_0] = 1045750493;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_17 [i_0] = 6650669772571524233LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)22553 : (short)-28963;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? -3726035612405119356LL : -8118685334840898224LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned short)57415;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
