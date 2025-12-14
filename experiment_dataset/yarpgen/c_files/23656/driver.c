#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)108;
unsigned short var_1 = (unsigned short)38906;
int var_2 = 242828039;
unsigned char var_3 = (unsigned char)182;
unsigned char var_4 = (unsigned char)116;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 3773666415U;
long long int var_8 = -5853998734815787955LL;
unsigned short var_9 = (unsigned short)64625;
unsigned short var_10 = (unsigned short)27987;
short var_11 = (short)-26842;
long long int var_12 = -8847673142571409998LL;
long long int var_13 = -1568549992554727690LL;
int zero = 0;
short var_14 = (short)4862;
unsigned char var_15 = (unsigned char)233;
short var_16 = (short)20327;
unsigned char var_17 = (unsigned char)112;
unsigned long long int var_18 = 7314670550827679125ULL;
unsigned int var_19 = 1263459180U;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)52179;
short var_22 = (short)5631;
_Bool var_23 = (_Bool)1;
_Bool arr_1 [20] ;
unsigned int arr_8 [24] ;
unsigned char arr_3 [20] ;
unsigned long long int arr_4 [20] [20] ;
signed char arr_5 [20] ;
_Bool arr_9 [24] [24] ;
long long int arr_10 [24] ;
long long int arr_15 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = 3000268666U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned char)23;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = 9491501838763831244ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (signed char)54;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = 1076799145454649030LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_15 [i_0] [i_1] = 7103411108211824044LL;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
