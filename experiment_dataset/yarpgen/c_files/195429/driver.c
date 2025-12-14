#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2879837966986817163LL;
long long int var_7 = -4599048770742836835LL;
int zero = 0;
unsigned char var_10 = (unsigned char)163;
int var_11 = -1664783518;
short var_12 = (short)30875;
unsigned int var_13 = 2258894795U;
unsigned short var_14 = (unsigned short)52471;
int var_15 = -1944120808;
signed char var_16 = (signed char)2;
unsigned short var_17 = (unsigned short)48247;
long long int var_18 = 6546103345944005400LL;
unsigned long long int var_19 = 10088078955527574773ULL;
unsigned short var_20 = (unsigned short)382;
int var_21 = -1740998614;
unsigned long long int var_22 = 16937889930642553504ULL;
short var_23 = (short)-11888;
int var_24 = 2019895258;
long long int var_25 = 8334378867322835024LL;
long long int arr_0 [13] ;
short arr_1 [13] ;
int arr_2 [13] ;
int arr_4 [13] [13] [13] ;
long long int arr_8 [14] [14] ;
int arr_9 [14] ;
signed char arr_10 [22] ;
long long int arr_11 [22] [22] ;
unsigned short arr_12 [22] [22] ;
long long int arr_13 [22] ;
short arr_14 [22] ;
int arr_15 [17] [17] ;
int arr_16 [17] ;
unsigned short arr_7 [13] ;
unsigned short arr_18 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = -4060799013433349254LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (short)-4560;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 231797089 : -1909019398;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 1922802522;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = -8730203549873491704LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = -49487883;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (signed char)-29;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = -7028005346064280535LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned short)39304;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = -3288973334819380990LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (short)4115;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_15 [i_0] [i_1] = 2069887012;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = -644084566;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned short)52169 : (unsigned short)27279;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_18 [i_0] = (unsigned short)816;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
