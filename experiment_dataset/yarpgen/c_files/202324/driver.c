#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9091236215017992300LL;
long long int var_1 = 6075410668569420647LL;
short var_2 = (short)1112;
unsigned short var_7 = (unsigned short)48408;
short var_8 = (short)31298;
unsigned char var_9 = (unsigned char)180;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)49849;
unsigned short var_12 = (unsigned short)12862;
unsigned long long int var_13 = 18088480506288482802ULL;
unsigned int var_14 = 353061451U;
int var_15 = -2139580532;
unsigned short var_16 = (unsigned short)45186;
long long int var_17 = -2383356712277748177LL;
unsigned short var_18 = (unsigned short)11345;
unsigned long long int var_19 = 2808812446397419955ULL;
short var_20 = (short)-21696;
long long int arr_0 [13] ;
unsigned short arr_1 [13] ;
short arr_6 [13] ;
short arr_4 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 5695156337669436702LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned short)25089;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (short)5942;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-26957;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
