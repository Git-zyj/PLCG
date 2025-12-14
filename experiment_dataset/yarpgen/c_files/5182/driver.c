#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38724;
int var_1 = -71173013;
unsigned int var_2 = 3793101100U;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 13047859983920272150ULL;
long long int var_5 = 2387435358126804807LL;
unsigned long long int var_6 = 3304676206489725076ULL;
unsigned long long int var_8 = 6689529927164941980ULL;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 1746547694U;
unsigned long long int var_11 = 14160168390936904102ULL;
unsigned int var_12 = 3030140145U;
short var_13 = (short)14946;
int zero = 0;
unsigned int var_15 = 3391194748U;
int var_16 = 144755312;
long long int var_17 = 2038328108515194135LL;
_Bool var_18 = (_Bool)0;
unsigned long long int arr_10 [14] [14] [14] [14] [14] ;
int arr_11 [14] ;
unsigned int arr_12 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 14857564973152207524ULL : 14378635085326101591ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? -1188913566 : 794774803;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = 2703633644U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
