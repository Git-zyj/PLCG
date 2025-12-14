#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11696041237902656749ULL;
int var_2 = 2131994094;
short var_3 = (short)-6155;
int var_5 = -1762846487;
unsigned char var_6 = (unsigned char)37;
signed char var_8 = (signed char)68;
unsigned long long int var_11 = 3336278372370114344ULL;
unsigned int var_12 = 3558815951U;
int zero = 0;
unsigned long long int var_13 = 8920672068543173989ULL;
unsigned char var_14 = (unsigned char)112;
unsigned long long int var_15 = 6341755703865880943ULL;
unsigned long long int var_16 = 14186606474918754131ULL;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 1366724597U;
long long int var_19 = -1828412873470275861LL;
unsigned short var_20 = (unsigned short)29242;
signed char var_21 = (signed char)21;
unsigned char var_22 = (unsigned char)214;
short arr_0 [14] [14] ;
unsigned short arr_1 [14] [14] ;
unsigned short arr_3 [11] [11] ;
unsigned char arr_4 [11] [11] ;
unsigned char arr_18 [13] ;
long long int arr_14 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-19328;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)10914 : (unsigned short)22616;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)32192;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)133;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_18 [i_0] = (unsigned char)41;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 6890627180018979305LL;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
