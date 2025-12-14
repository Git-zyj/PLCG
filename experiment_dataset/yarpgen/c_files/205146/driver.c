#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3067267027U;
unsigned char var_4 = (unsigned char)203;
unsigned char var_7 = (unsigned char)61;
long long int var_8 = 22776494068986679LL;
long long int var_9 = 2458057863390505882LL;
unsigned long long int var_12 = 10777818903341133711ULL;
unsigned short var_13 = (unsigned short)59326;
long long int var_15 = -3707942179201467636LL;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = 6149250894343728854LL;
unsigned long long int var_20 = 4934495920255112524ULL;
unsigned int var_21 = 4031503235U;
unsigned long long int var_22 = 218859958329315772ULL;
unsigned int var_23 = 926637349U;
signed char var_24 = (signed char)-105;
unsigned int var_25 = 611254740U;
unsigned int var_26 = 4029083886U;
int var_27 = 1514438777;
unsigned int var_28 = 2641673942U;
unsigned int var_29 = 629043373U;
unsigned int var_30 = 3592422329U;
long long int var_31 = 7611175092089663406LL;
_Bool arr_2 [15] ;
unsigned int arr_7 [15] [15] [15] [15] ;
unsigned char arr_8 [15] [15] [15] ;
unsigned int arr_11 [15] [15] [15] [15] [15] ;
int arr_16 [21] [21] ;
long long int arr_17 [21] ;
long long int arr_18 [21] [21] [21] ;
unsigned long long int arr_22 [20] [20] [20] ;
unsigned int arr_24 [21] ;
unsigned long long int arr_25 [21] [21] ;
unsigned int arr_31 [21] [21] [21] [21] ;
signed char arr_33 [21] [21] [21] ;
unsigned int arr_34 [21] ;
unsigned char arr_35 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 3779767131U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)106;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 3824243704U : 351302563U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_16 [i_0] [i_1] = 1920598850;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_17 [i_0] = 1885741971571300128LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = -1893882243909333726LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = 17356196019905118289ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_24 [i_0] = 1526504298U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_25 [i_0] [i_1] = 9178694148888888775ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 1254194846U : 241504631U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-46 : (signed char)88;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_34 [i_0] = 330740842U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = (unsigned char)108;
}

void checksum() {
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
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_34 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_35 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
