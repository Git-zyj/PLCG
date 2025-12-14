#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8095350861711566852LL;
unsigned long long int var_3 = 9940867691865095761ULL;
short var_4 = (short)63;
signed char var_5 = (signed char)-20;
unsigned int var_6 = 598254577U;
unsigned long long int var_8 = 12589973730696240044ULL;
long long int var_10 = 6855616786097154167LL;
unsigned long long int var_11 = 529697804387112338ULL;
signed char var_12 = (signed char)-38;
unsigned char var_13 = (unsigned char)237;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned short var_18 = (unsigned short)46763;
int var_19 = -963143094;
unsigned short var_20 = (unsigned short)18177;
int var_21 = 190958919;
unsigned long long int var_22 = 8298056647526862335ULL;
unsigned long long int var_23 = 997404267757370416ULL;
unsigned short arr_0 [17] [17] ;
unsigned char arr_1 [17] ;
int arr_3 [17] ;
unsigned long long int arr_4 [17] [17] ;
long long int arr_5 [17] [17] ;
int arr_6 [17] ;
unsigned char arr_7 [17] ;
int arr_8 [17] ;
long long int arr_9 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)3845;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned char)209;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = -1454659116;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 2995233517712899057ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = 9104638733878317307LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = -1259545278;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (unsigned char)31;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = -688124085;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = 6256380849155665480LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
