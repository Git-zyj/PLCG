#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)221;
long long int var_2 = 3183524136392757411LL;
unsigned long long int var_3 = 17036833501285761888ULL;
unsigned long long int var_4 = 5298176400288359942ULL;
int var_5 = 722011216;
signed char var_6 = (signed char)31;
long long int var_7 = 2706499596783574868LL;
int var_8 = -910855005;
unsigned short var_9 = (unsigned short)344;
unsigned int var_10 = 91797820U;
signed char var_11 = (signed char)-121;
unsigned int var_12 = 3506702996U;
unsigned char var_13 = (unsigned char)30;
unsigned char var_14 = (unsigned char)238;
signed char var_16 = (signed char)-55;
signed char var_17 = (signed char)-30;
unsigned long long int var_19 = 10247990016729158336ULL;
int zero = 0;
long long int var_20 = -372004888651958831LL;
unsigned char var_21 = (unsigned char)119;
unsigned short var_22 = (unsigned short)1617;
unsigned char var_23 = (unsigned char)214;
int var_24 = -103802469;
unsigned char var_25 = (unsigned char)190;
unsigned int var_26 = 2550871014U;
signed char var_27 = (signed char)-34;
signed char var_28 = (signed char)-88;
unsigned long long int var_29 = 12909581357749307126ULL;
int arr_2 [23] ;
unsigned long long int arr_6 [23] [23] ;
_Bool arr_16 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = -1149715352;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 9782269536474534114ULL : 1978452368343148460ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
