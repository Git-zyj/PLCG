#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6493437934931253648LL;
int var_1 = -1075314960;
unsigned int var_2 = 2131420906U;
unsigned long long int var_3 = 7856690088894980202ULL;
unsigned long long int var_4 = 5220796071285873072ULL;
unsigned int var_5 = 451636461U;
unsigned int var_6 = 935964130U;
int var_7 = 1948374556;
unsigned char var_8 = (unsigned char)151;
unsigned int var_9 = 3491874679U;
long long int var_10 = -7506662183710143632LL;
unsigned short var_11 = (unsigned short)46937;
int zero = 0;
unsigned char var_12 = (unsigned char)169;
unsigned int var_13 = 2163882759U;
short var_14 = (short)2108;
unsigned long long int var_15 = 15656410396695572560ULL;
signed char var_16 = (signed char)19;
unsigned int var_17 = 1374685907U;
unsigned int var_18 = 1326010704U;
short var_19 = (short)-14292;
unsigned char var_20 = (unsigned char)111;
unsigned int arr_0 [22] [22] ;
int arr_2 [22] ;
unsigned short arr_3 [22] [22] ;
unsigned long long int arr_4 [22] [22] [22] ;
signed char arr_5 [22] [22] ;
signed char arr_6 [17] ;
int arr_7 [17] ;
unsigned short arr_8 [17] [17] [17] ;
unsigned short arr_9 [17] ;
signed char arr_12 [17] [17] [17] ;
int arr_10 [17] ;
unsigned int arr_15 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 4055798935U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 256979978;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)50281;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 15406761788220717124ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)125;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (signed char)-29;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = 513375404;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)62974;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned short)49199 : (unsigned short)40427;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (signed char)-34;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? -1029775366 : 2024300927;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 1982908754U : 1406649342U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
