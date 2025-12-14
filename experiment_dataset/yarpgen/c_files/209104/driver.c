#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_3 = -1902844515;
int var_4 = 652525594;
short var_5 = (short)-1035;
unsigned char var_6 = (unsigned char)199;
int var_7 = 200307294;
long long int var_8 = -2714201487259385257LL;
unsigned short var_10 = (unsigned short)53085;
unsigned long long int var_13 = 7476950036158040570ULL;
int zero = 0;
int var_14 = -1256073842;
int var_15 = -2060312052;
long long int var_16 = 8701248911584871976LL;
unsigned long long int var_17 = 455402529541089475ULL;
int var_18 = -1162561577;
unsigned short var_19 = (unsigned short)16808;
long long int var_20 = -3522364969415467051LL;
unsigned char arr_0 [24] ;
int arr_2 [24] ;
int arr_4 [24] [24] ;
unsigned short arr_6 [24] [24] [24] ;
unsigned char arr_5 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned char)235;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = -508811160;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = 103006623;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)37334;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)132;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
