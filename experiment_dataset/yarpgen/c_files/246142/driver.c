#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)124;
long long int var_1 = -564665789150178542LL;
signed char var_2 = (signed char)-89;
unsigned int var_3 = 3172677520U;
unsigned char var_4 = (unsigned char)211;
long long int var_5 = 1255370677669903063LL;
long long int var_6 = -6068667586991289210LL;
unsigned long long int var_7 = 13618330918634876511ULL;
unsigned short var_8 = (unsigned short)26289;
unsigned char var_9 = (unsigned char)226;
long long int var_10 = 1505465375539371380LL;
signed char var_11 = (signed char)-3;
unsigned int var_12 = 3475930775U;
int zero = 0;
long long int var_13 = 5360438786143234781LL;
unsigned int var_14 = 3532642208U;
long long int var_15 = 8550686807122588985LL;
unsigned long long int var_16 = 1206954936676249627ULL;
unsigned int var_17 = 900513538U;
unsigned long long int var_18 = 5861459783110310670ULL;
int var_19 = -1847697486;
unsigned long long int var_20 = 12777156384237163507ULL;
unsigned short var_21 = (unsigned short)41491;
signed char var_22 = (signed char)17;
int var_23 = -1811565654;
int arr_0 [18] [18] ;
signed char arr_1 [18] ;
short arr_5 [17] [17] ;
long long int arr_7 [17] ;
long long int arr_10 [17] [17] [17] [17] ;
long long int arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 1307942326;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (signed char)-22;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (short)25924;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = -6861270599944955598LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -6418685226489062300LL : -4514742432109749078LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = -7325800678745349383LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
