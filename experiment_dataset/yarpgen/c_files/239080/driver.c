#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4768669160456530155ULL;
unsigned long long int var_1 = 2778391952290246572ULL;
int var_2 = 238884031;
unsigned char var_4 = (unsigned char)110;
short var_6 = (short)29678;
signed char var_7 = (signed char)127;
short var_8 = (short)-1016;
unsigned short var_9 = (unsigned short)60802;
long long int var_11 = -7687265670665703086LL;
int zero = 0;
unsigned short var_14 = (unsigned short)5299;
short var_15 = (short)14058;
signed char var_16 = (signed char)-31;
unsigned long long int var_17 = 2831508776204024595ULL;
unsigned long long int var_18 = 9548219031013308408ULL;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-10951;
long long int var_21 = 8652248511772353052LL;
int var_22 = -472773363;
unsigned long long int var_23 = 14478785897651517275ULL;
unsigned int arr_0 [25] ;
short arr_2 [25] ;
short arr_3 [25] [25] ;
unsigned long long int arr_10 [17] ;
long long int arr_4 [25] [25] [25] ;
long long int arr_7 [25] ;
long long int arr_12 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 1673691778U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (short)20638;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-21720;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = 1734646368023041922ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -9171216945265582400LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = 7664947972076178641LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 4588535638895476413LL : 7224871387676905422LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
