#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3290320076623117192LL;
long long int var_8 = 1762563510705072587LL;
unsigned long long int var_11 = 14751201207460670161ULL;
unsigned short var_12 = (unsigned short)17103;
short var_13 = (short)3867;
unsigned short var_14 = (unsigned short)32275;
int var_15 = 729726196;
int var_19 = 152903620;
int zero = 0;
int var_20 = 895773923;
short var_21 = (short)-31918;
int var_22 = -1757105678;
unsigned char var_23 = (unsigned char)13;
int var_24 = -262122925;
unsigned char var_25 = (unsigned char)134;
int var_26 = 1731582707;
unsigned short var_27 = (unsigned short)38020;
long long int var_28 = -5758294331452466793LL;
short var_29 = (short)-4900;
unsigned short var_30 = (unsigned short)5061;
short var_31 = (short)-31369;
unsigned char arr_0 [15] [15] ;
unsigned short arr_1 [15] ;
unsigned short arr_2 [15] ;
signed char arr_6 [15] [15] [15] ;
long long int arr_8 [20] [20] ;
unsigned short arr_9 [20] ;
signed char arr_7 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)105 : (unsigned char)228;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned short)31107;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)7370 : (unsigned short)10559;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-110 : (signed char)-68;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = 7966598048411161221LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned short)20835 : (unsigned short)55307;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-127 : (signed char)94;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
