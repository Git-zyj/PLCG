#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1379860924U;
int var_6 = -1664299576;
long long int var_8 = -562721764923623475LL;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)24343;
long long int var_14 = -4464160339628797281LL;
unsigned short var_15 = (unsigned short)43457;
unsigned long long int var_16 = 3352846976918349727ULL;
unsigned char var_17 = (unsigned char)199;
int zero = 0;
unsigned short var_20 = (unsigned short)46522;
long long int var_21 = 52838994765865951LL;
long long int var_22 = -4793043470983728419LL;
unsigned char var_23 = (unsigned char)229;
unsigned long long int var_24 = 11469769523737805349ULL;
_Bool var_25 = (_Bool)1;
unsigned int arr_0 [24] [24] ;
unsigned char arr_3 [24] ;
unsigned char arr_7 [24] [24] ;
unsigned int arr_10 [24] ;
unsigned long long int arr_9 [24] [24] [24] [24] ;
unsigned int arr_16 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 3390996727U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned char)224;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)42 : (unsigned char)117;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = 505989731U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 16620015480324314832ULL : 11526863112988814253ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_16 [i_0] [i_1] = (i_1 % 2 == 0) ? 3084495001U : 1782988939U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
