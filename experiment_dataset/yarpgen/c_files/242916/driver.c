#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 892218568272136121ULL;
signed char var_1 = (signed char)65;
_Bool var_3 = (_Bool)0;
short var_4 = (short)-25607;
short var_8 = (short)16828;
unsigned char var_11 = (unsigned char)208;
long long int var_13 = -1580629773734700739LL;
int var_14 = -737588110;
int zero = 0;
short var_15 = (short)-4067;
long long int var_16 = -3411133149500576145LL;
int var_17 = 1141521058;
unsigned short var_18 = (unsigned short)48482;
long long int var_19 = -1050290635407442074LL;
unsigned long long int var_20 = 10453271448062289817ULL;
unsigned int var_21 = 2932889031U;
long long int var_22 = -9102232033674278902LL;
long long int arr_0 [13] ;
unsigned long long int arr_1 [13] ;
short arr_3 [13] [13] ;
unsigned long long int arr_4 [13] [13] ;
long long int arr_6 [13] [13] [13] ;
long long int arr_8 [13] ;
_Bool arr_9 [13] [13] [13] [13] ;
short arr_10 [13] [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 7212831290025284625LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 7319373880508954807ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (short)32595;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 16617153295883683881ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 1353040527549875264LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = 9158457341692389241LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)324;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
