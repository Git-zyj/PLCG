#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31800;
unsigned int var_1 = 1005527238U;
unsigned long long int var_2 = 5117697799916185367ULL;
signed char var_4 = (signed char)-121;
unsigned char var_5 = (unsigned char)238;
int var_6 = 149185004;
short var_7 = (short)-26168;
short var_8 = (short)9526;
signed char var_9 = (signed char)-4;
int zero = 0;
unsigned int var_10 = 1625579708U;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)220;
unsigned short var_13 = (unsigned short)51297;
signed char var_14 = (signed char)23;
int var_15 = 1156403407;
signed char var_16 = (signed char)-17;
int var_17 = 111538056;
signed char var_18 = (signed char)51;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)59538;
signed char var_21 = (signed char)109;
signed char var_22 = (signed char)-55;
long long int var_23 = -1182073708298112608LL;
unsigned int var_24 = 2229270114U;
short arr_2 [20] [20] ;
long long int arr_12 [20] [20] ;
signed char arr_3 [20] ;
signed char arr_10 [20] ;
int arr_26 [20] [20] [20] ;
unsigned int arr_27 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (short)1466;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? -1579401249815028679LL : 4151399630317134902LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (signed char)-86;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (signed char)18;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 826490931 : 911498749;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_27 [i_0] = 2374000420U;
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
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_26 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_27 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
