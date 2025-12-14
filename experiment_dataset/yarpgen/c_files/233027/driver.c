#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2552070783U;
unsigned long long int var_3 = 10300033485077260743ULL;
unsigned int var_5 = 1174323677U;
unsigned char var_7 = (unsigned char)40;
_Bool var_8 = (_Bool)0;
int var_9 = -802480385;
signed char var_10 = (signed char)-110;
unsigned short var_11 = (unsigned short)38265;
short var_12 = (short)7675;
unsigned long long int var_14 = 3956634480250072687ULL;
int var_16 = 936722286;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 779587369U;
unsigned long long int var_19 = 7953568461274239887ULL;
short var_20 = (short)23975;
int var_21 = -1278787000;
unsigned long long int var_22 = 9085266886752206382ULL;
unsigned long long int arr_0 [24] [24] ;
_Bool arr_1 [24] ;
signed char arr_2 [24] [24] ;
short arr_3 [24] ;
long long int arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 14022177171468579780ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-97;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (short)31331;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -2569414871811245085LL : -8172803478377368067LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
