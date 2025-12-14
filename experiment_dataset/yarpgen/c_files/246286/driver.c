#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -518313601774107920LL;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)86;
unsigned short var_3 = (unsigned short)59500;
unsigned long long int var_4 = 16733346840687768045ULL;
signed char var_5 = (signed char)55;
int var_6 = -1030231579;
unsigned long long int var_7 = 2022734149808904403ULL;
unsigned int var_8 = 2210963742U;
signed char var_9 = (signed char)-15;
unsigned int var_10 = 3997359617U;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_12 = 1956758450;
unsigned int var_13 = 563358469U;
unsigned long long int var_14 = 5921618042970585813ULL;
long long int var_15 = -1637325454499112682LL;
signed char var_16 = (signed char)25;
int var_17 = 1062995073;
long long int var_18 = 2932027472728913453LL;
signed char arr_0 [20] ;
short arr_1 [20] ;
signed char arr_4 [20] [20] ;
unsigned short arr_5 [20] [20] [20] ;
long long int arr_6 [20] [20] [20] [20] ;
unsigned long long int arr_2 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (signed char)51;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (short)5158;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-72;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)22255;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = -4967570982313809094LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 16212654869964042238ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
