#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12507733342531414364ULL;
unsigned int var_3 = 574161835U;
unsigned char var_4 = (unsigned char)31;
unsigned char var_6 = (unsigned char)43;
signed char var_7 = (signed char)-75;
unsigned long long int var_9 = 10593002139229185064ULL;
unsigned char var_10 = (unsigned char)210;
long long int var_12 = -5580785110972891579LL;
short var_13 = (short)756;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = 1677660188;
signed char var_19 = (signed char)-111;
long long int var_20 = 3096389306696361312LL;
unsigned int var_21 = 3042798660U;
unsigned char var_22 = (unsigned char)227;
short var_23 = (short)3664;
unsigned char var_24 = (unsigned char)171;
unsigned int var_25 = 3274744774U;
int var_26 = -2091854719;
unsigned int var_27 = 2190999932U;
signed char var_28 = (signed char)-117;
short var_29 = (short)-31417;
unsigned short arr_1 [18] ;
long long int arr_6 [18] [18] [18] ;
signed char arr_15 [18] [18] [18] ;
unsigned int arr_19 [22] [22] ;
short arr_7 [18] [18] ;
unsigned int arr_10 [18] ;
signed char arr_17 [18] ;
long long int arr_20 [22] ;
int arr_23 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned short)35408;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -5491134127827869090LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (signed char)-14;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_19 [i_0] [i_1] = 3844251715U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = (short)9997;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = 2702899880U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_17 [i_0] = (signed char)90;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_20 [i_0] = 7929439569913805695LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? 209542516 : 57152176;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
