#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6425478427754665146LL;
unsigned long long int var_2 = 4395503207696488763ULL;
unsigned char var_3 = (unsigned char)50;
int var_4 = -1541691983;
unsigned char var_5 = (unsigned char)19;
unsigned char var_7 = (unsigned char)28;
int var_8 = -1449087784;
short var_9 = (short)18278;
int var_15 = -130399082;
unsigned int var_17 = 517467814U;
int zero = 0;
unsigned long long int var_19 = 8117894289724400440ULL;
unsigned char var_20 = (unsigned char)69;
unsigned char var_21 = (unsigned char)52;
unsigned int var_22 = 2922670999U;
unsigned short var_23 = (unsigned short)6798;
unsigned char var_24 = (unsigned char)46;
unsigned char var_25 = (unsigned char)19;
int var_26 = -1033459934;
long long int var_27 = -3204826415248928410LL;
unsigned int var_28 = 2484610255U;
short var_29 = (short)-4061;
unsigned int arr_1 [12] ;
int arr_3 [12] ;
unsigned char arr_4 [12] [12] [12] ;
unsigned long long int arr_5 [12] [12] ;
unsigned char arr_8 [12] [12] ;
unsigned long long int arr_13 [12] [12] ;
long long int arr_19 [25] ;
short arr_20 [25] [25] ;
signed char arr_11 [12] ;
unsigned int arr_17 [12] ;
unsigned char arr_18 [12] [12] [12] ;
unsigned char arr_23 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 1532633969U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = -223263984;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = 15779896712336531713ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)121;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? 10496352245854468640ULL : 6548267851916072464ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? -2012789522586176080LL : 453676348085368827LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_20 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-25621 : (short)-26265;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = (signed char)61;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 153746180U : 3544765801U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)177 : (unsigned char)46;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (unsigned char)138 : (unsigned char)79;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
