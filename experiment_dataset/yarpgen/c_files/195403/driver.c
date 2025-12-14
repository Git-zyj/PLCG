#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4334062954302757292ULL;
unsigned char var_2 = (unsigned char)153;
unsigned int var_6 = 605819278U;
unsigned char var_8 = (unsigned char)149;
signed char var_9 = (signed char)82;
int var_10 = 156253885;
unsigned short var_11 = (unsigned short)30940;
_Bool var_12 = (_Bool)1;
unsigned long long int var_14 = 3944405691447814116ULL;
int zero = 0;
unsigned long long int var_15 = 3848729438785272479ULL;
signed char var_16 = (signed char)35;
long long int var_17 = 8422257694627662402LL;
long long int var_18 = -5976890942179710413LL;
short var_19 = (short)-27608;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 5409713707003894767ULL;
unsigned char var_22 = (unsigned char)80;
unsigned char arr_1 [14] ;
signed char arr_4 [20] [20] ;
unsigned char arr_5 [20] ;
short arr_6 [20] ;
unsigned int arr_7 [20] ;
unsigned short arr_8 [20] [20] ;
unsigned short arr_9 [20] ;
int arr_3 [14] ;
unsigned char arr_13 [20] [20] ;
unsigned long long int arr_14 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned char)116;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)75;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (unsigned char)68;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (short)-68;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = 1208316044U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)62183;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (unsigned short)37995;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 153212802;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)72;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_14 [i_0] [i_1] = 18310464155190299691ULL;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
