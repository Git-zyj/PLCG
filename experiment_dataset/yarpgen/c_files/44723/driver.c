#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)130;
unsigned long long int var_4 = 599479725982518923ULL;
unsigned long long int var_5 = 2238479210502631420ULL;
unsigned long long int var_7 = 4165014034085930154ULL;
unsigned char var_8 = (unsigned char)49;
unsigned char var_9 = (unsigned char)246;
signed char var_10 = (signed char)76;
int zero = 0;
unsigned int var_12 = 2958657344U;
unsigned long long int var_13 = 656914360273483152ULL;
signed char var_14 = (signed char)86;
unsigned char var_15 = (unsigned char)106;
unsigned long long int var_16 = 2038880136922050815ULL;
int var_17 = 561025398;
unsigned long long int var_18 = 1804522174804686174ULL;
unsigned long long int var_19 = 5157430504463774731ULL;
signed char var_20 = (signed char)-13;
unsigned long long int var_21 = 5064964695945822962ULL;
unsigned char arr_0 [14] [14] ;
unsigned long long int arr_1 [14] ;
unsigned long long int arr_4 [14] [14] ;
signed char arr_7 [14] ;
unsigned char arr_12 [21] ;
unsigned long long int arr_2 [14] ;
unsigned int arr_3 [14] [14] ;
int arr_14 [21] ;
signed char arr_15 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)11;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 1342956936119473343ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 18337299970571185693ULL : 15208884126074304137ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (signed char)99 : (signed char)-51;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = (unsigned char)35;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 11824444606112863092ULL : 13667361746682162300ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 3504995111U : 2211095250U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = 774094978;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = (signed char)-24;
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
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
