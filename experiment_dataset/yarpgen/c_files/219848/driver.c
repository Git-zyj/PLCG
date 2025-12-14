#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30509;
long long int var_1 = 3610386810621949278LL;
unsigned long long int var_2 = 264197767088363063ULL;
short var_3 = (short)1269;
unsigned char var_5 = (unsigned char)56;
unsigned int var_6 = 3746556224U;
unsigned short var_7 = (unsigned short)43929;
short var_8 = (short)4638;
short var_9 = (short)-25907;
unsigned char var_10 = (unsigned char)133;
int zero = 0;
short var_11 = (short)-20944;
long long int var_12 = 5441560633679104038LL;
short var_13 = (short)-27874;
int var_14 = 575398545;
signed char var_15 = (signed char)-70;
_Bool var_16 = (_Bool)1;
short var_17 = (short)9230;
short arr_0 [12] ;
long long int arr_1 [12] ;
long long int arr_3 [16] ;
_Bool arr_4 [16] ;
int arr_2 [12] ;
signed char arr_5 [16] ;
int arr_6 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)25884 : (short)-28797;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 8085985579323419082LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = -3030782265730650560LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 60745776 : 1803342859;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (signed char)60;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = -2057936827;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
