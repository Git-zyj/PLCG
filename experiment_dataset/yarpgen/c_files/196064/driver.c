#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14074700304479425362ULL;
long long int var_1 = -3447714648739838570LL;
unsigned long long int var_2 = 12783082944381485857ULL;
_Bool var_3 = (_Bool)1;
long long int var_4 = -2915164324725566008LL;
unsigned char var_5 = (unsigned char)90;
_Bool var_6 = (_Bool)0;
long long int var_7 = -6748109434634017682LL;
int var_8 = 616481035;
int var_11 = -57359396;
int zero = 0;
long long int var_12 = -7368682651622134857LL;
unsigned int var_13 = 829778803U;
long long int var_14 = 6740384055015295795LL;
_Bool var_15 = (_Bool)1;
long long int var_16 = -8881573503255005852LL;
unsigned long long int var_17 = 983322024161630643ULL;
unsigned long long int var_18 = 3261780366942303466ULL;
int var_19 = -293597886;
unsigned char var_20 = (unsigned char)131;
unsigned long long int var_21 = 6542858368526397619ULL;
signed char var_22 = (signed char)-114;
unsigned int var_23 = 2180474905U;
unsigned char var_24 = (unsigned char)206;
signed char var_25 = (signed char)124;
signed char arr_0 [20] ;
_Bool arr_1 [20] [20] ;
short arr_2 [20] [20] ;
long long int arr_3 [20] ;
unsigned int arr_6 [20] ;
unsigned int arr_8 [20] [20] [20] ;
long long int arr_7 [20] ;
long long int arr_13 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (signed char)48;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (short)4556;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = -4336363222661571107LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = 1918641833U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 3048727579U : 615264543U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = -6900465274536826695LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_13 [i_0] [i_1] = -831192005120812275LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
