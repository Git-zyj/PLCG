#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-1109;
unsigned long long int var_3 = 7493756960385670418ULL;
unsigned long long int var_7 = 16450727730224135799ULL;
short var_10 = (short)28025;
unsigned long long int var_12 = 7189003538254160306ULL;
short var_14 = (short)16147;
unsigned long long int var_17 = 17877049350731073374ULL;
int zero = 0;
unsigned long long int var_20 = 12922647818206008373ULL;
short var_21 = (short)-5495;
short var_22 = (short)-23288;
unsigned long long int arr_0 [18] [18] ;
unsigned long long int arr_1 [18] ;
unsigned long long int arr_2 [18] ;
short arr_3 [18] [18] ;
short arr_5 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 15812026968188104248ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 15921393739676443980ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 15633993761150294771ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-17739;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-27657;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
