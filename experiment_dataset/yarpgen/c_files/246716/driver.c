#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 11629584656665934513ULL;
signed char var_3 = (signed char)43;
short var_6 = (short)-15906;
long long int var_7 = -7958319670604019244LL;
long long int var_8 = 2918992762895362921LL;
unsigned short var_9 = (unsigned short)49732;
unsigned long long int var_11 = 7749478573317479771ULL;
long long int var_12 = -271441786450752590LL;
int var_13 = 11533834;
unsigned int var_14 = 2011484185U;
_Bool var_15 = (_Bool)0;
int var_16 = -1024990629;
int zero = 0;
long long int var_17 = -4625770363563671329LL;
signed char var_18 = (signed char)4;
long long int var_19 = 7852944235242136956LL;
long long int var_20 = 1605898073980839485LL;
unsigned int var_21 = 3667158908U;
short var_22 = (short)-7632;
unsigned char var_23 = (unsigned char)80;
int var_24 = 2038293045;
long long int var_25 = 3650052382975707881LL;
unsigned char var_26 = (unsigned char)135;
unsigned short var_27 = (unsigned short)33712;
unsigned long long int var_28 = 13526752188749728939ULL;
long long int var_29 = 2433019121669107714LL;
int arr_0 [19] ;
long long int arr_5 [21] [21] [21] ;
long long int arr_6 [21] ;
unsigned long long int arr_8 [21] [21] [21] [21] ;
_Bool arr_9 [21] [21] ;
unsigned char arr_11 [21] [21] [21] [21] ;
short arr_15 [25] ;
unsigned long long int arr_16 [25] [25] ;
unsigned char arr_20 [25] [25] [25] ;
signed char arr_25 [25] [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = -1794567402;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 5588971677514969356LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = -7995617271117587275LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 12512703319100879382ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (unsigned char)54;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_15 [i_0] = (short)16612;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_16 [i_0] [i_1] = 6987840344115403364ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (unsigned char)203;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-11;
}

void checksum() {
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
