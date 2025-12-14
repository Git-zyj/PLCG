#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-100;
unsigned short var_1 = (unsigned short)55585;
unsigned int var_5 = 110059318U;
long long int var_7 = -5932520735975900916LL;
long long int var_9 = 5175233081915761694LL;
short var_11 = (short)-26082;
short var_13 = (short)20085;
int zero = 0;
short var_15 = (short)-2632;
short var_16 = (short)-3806;
unsigned char var_17 = (unsigned char)69;
unsigned int var_18 = 3784189336U;
unsigned char var_19 = (unsigned char)165;
unsigned int var_20 = 1167985445U;
unsigned int var_21 = 4201338868U;
unsigned int var_22 = 3709715978U;
short var_23 = (short)14834;
unsigned int var_24 = 3383796259U;
signed char var_25 = (signed char)-34;
unsigned int var_26 = 1606044869U;
unsigned short arr_0 [23] [23] ;
unsigned int arr_1 [23] ;
unsigned char arr_2 [23] [23] ;
short arr_3 [23] ;
short arr_5 [23] ;
unsigned char arr_8 [23] ;
unsigned int arr_9 [23] [23] [23] ;
long long int arr_17 [23] [23] [23] [23] ;
long long int arr_10 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)56565;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 468336220U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)28;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (short)13035;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (short)9876;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (unsigned char)27;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 563135626U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = -7384350322356678515LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = -2259168735614832247LL;
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
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
