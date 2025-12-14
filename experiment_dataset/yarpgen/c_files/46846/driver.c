#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)3029;
unsigned char var_4 = (unsigned char)46;
unsigned long long int var_6 = 7560888233633705978ULL;
unsigned long long int var_7 = 12899517409240707959ULL;
int var_8 = 1453481675;
unsigned int var_9 = 222440211U;
int zero = 0;
unsigned long long int var_12 = 7737493353875404598ULL;
_Bool var_13 = (_Bool)1;
int var_14 = 801480453;
signed char var_15 = (signed char)-95;
signed char var_16 = (signed char)-119;
unsigned int var_17 = 1481070476U;
long long int var_18 = -3715328010127113767LL;
unsigned int arr_10 [13] [13] ;
signed char arr_12 [13] ;
unsigned char arr_13 [13] ;
unsigned int arr_15 [13] [13] [13] ;
unsigned int arr_9 [12] [12] [12] [12] ;
signed char arr_16 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? 2791907983U : 3632750835U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = (signed char)80;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = (unsigned char)89;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 3863860901U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 2363836897U : 4268206823U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)127 : (signed char)122;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
