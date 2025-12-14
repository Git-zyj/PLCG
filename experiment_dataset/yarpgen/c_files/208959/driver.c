#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -727890924;
unsigned char var_2 = (unsigned char)92;
int var_5 = 1226009334;
unsigned char var_6 = (unsigned char)88;
unsigned long long int var_7 = 3628485183671044552ULL;
signed char var_8 = (signed char)-25;
_Bool var_9 = (_Bool)1;
unsigned int var_13 = 2168394084U;
signed char var_14 = (signed char)-17;
signed char var_15 = (signed char)-114;
int zero = 0;
int var_17 = -1203784729;
unsigned short var_18 = (unsigned short)31216;
unsigned int var_19 = 2493890726U;
unsigned char var_20 = (unsigned char)254;
unsigned int var_21 = 638252649U;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)35492;
unsigned char var_24 = (unsigned char)80;
unsigned char var_25 = (unsigned char)27;
unsigned short var_26 = (unsigned short)25810;
unsigned char var_27 = (unsigned char)51;
unsigned char var_28 = (unsigned char)230;
int var_29 = 1008348996;
unsigned int var_30 = 2476442096U;
_Bool arr_1 [19] [19] ;
unsigned long long int arr_2 [19] [19] ;
int arr_3 [19] [19] ;
unsigned char arr_5 [19] ;
unsigned long long int arr_6 [19] ;
_Bool arr_9 [19] [19] ;
int arr_10 [19] ;
unsigned long long int arr_12 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 10728202802685719122ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = 1821311981;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 15878653748743476012ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = 1577271566;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = 6641561847115617771ULL;
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
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
