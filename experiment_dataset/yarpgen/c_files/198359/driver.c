#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 2115919065;
short var_4 = (short)31520;
unsigned long long int var_5 = 11309153033636133114ULL;
int var_6 = -1096407493;
unsigned long long int var_7 = 15955465924590228702ULL;
unsigned char var_8 = (unsigned char)254;
int var_10 = 809378767;
unsigned long long int var_14 = 16230415037130078712ULL;
unsigned short var_16 = (unsigned short)18339;
int zero = 0;
unsigned long long int var_19 = 2126089708899629287ULL;
unsigned char var_20 = (unsigned char)245;
long long int var_21 = -72692667268647885LL;
unsigned long long int var_22 = 12274157055068145053ULL;
unsigned long long int var_23 = 17932626755432830087ULL;
unsigned short var_24 = (unsigned short)53025;
int var_25 = 1505873903;
unsigned int arr_0 [11] ;
unsigned int arr_3 [11] ;
unsigned int arr_4 [11] [11] ;
unsigned short arr_6 [19] ;
unsigned long long int arr_9 [19] [19] ;
unsigned char arr_11 [19] ;
int arr_12 [19] [19] [19] ;
unsigned char arr_17 [19] [19] ;
unsigned char arr_5 [11] ;
unsigned long long int arr_18 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 1742036238U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 3681187798U : 3466260409U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = 1289601239U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)17802 : (unsigned short)59548;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = 8582591213400312822ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (unsigned char)177;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = -1569312091;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned char)206;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)120 : (unsigned char)99;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 17496388154315636997ULL : 1079103320063814201ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
