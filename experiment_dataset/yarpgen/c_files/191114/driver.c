#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5938979709624959030LL;
unsigned long long int var_2 = 7175271971853023227ULL;
unsigned short var_5 = (unsigned short)64557;
int var_7 = 1929239790;
int var_8 = -2094644017;
unsigned char var_10 = (unsigned char)221;
unsigned long long int var_11 = 9243109174013898ULL;
unsigned char var_12 = (unsigned char)152;
int zero = 0;
int var_14 = 1868965053;
unsigned long long int var_15 = 4899310576114220107ULL;
long long int var_16 = 8050303563288481615LL;
long long int var_17 = -3294236766423467756LL;
int var_18 = 622950764;
unsigned char var_19 = (unsigned char)53;
int var_20 = 1428609729;
long long int arr_2 [18] [18] ;
unsigned char arr_3 [18] ;
unsigned long long int arr_5 [18] [18] [18] ;
unsigned short arr_8 [20] [20] ;
unsigned long long int arr_9 [20] ;
unsigned char arr_10 [20] ;
unsigned long long int arr_15 [20] ;
unsigned long long int arr_12 [20] ;
unsigned char arr_13 [20] ;
long long int arr_14 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 3108739633753886723LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned char)216;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 574906622177901895ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)24047 : (unsigned short)47748;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = 16319024266772672280ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (unsigned char)187;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = 11439869309899168850ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 10197680789402829393ULL : 15218360290345230699ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned char)234 : (unsigned char)170;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 7010252860619287363LL : -738870399860366040LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
