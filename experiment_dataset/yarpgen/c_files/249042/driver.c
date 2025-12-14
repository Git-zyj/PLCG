#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25904;
long long int var_1 = -2261903793922979048LL;
long long int var_2 = 1425356811155991846LL;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)45102;
unsigned short var_5 = (unsigned short)32444;
unsigned long long int var_6 = 4460375039746968257ULL;
unsigned short var_7 = (unsigned short)36182;
long long int var_8 = -2838907566970076724LL;
int var_9 = -640964637;
int var_10 = -1330535029;
long long int var_11 = 9178880531691275127LL;
short var_12 = (short)-24719;
long long int var_13 = -1306142382331903384LL;
unsigned char var_14 = (unsigned char)9;
short var_15 = (short)3628;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-21003;
unsigned int var_18 = 1118059065U;
int zero = 0;
long long int var_19 = -2929768484662930813LL;
long long int var_20 = 8916403489375507021LL;
long long int var_21 = -7897508080740755278LL;
long long int var_22 = -402341326457591759LL;
_Bool var_23 = (_Bool)0;
int var_24 = 873971539;
unsigned short var_25 = (unsigned short)8602;
long long int var_26 = -2617114007547854201LL;
long long int arr_2 [10] ;
unsigned int arr_3 [10] ;
int arr_7 [10] [10] [10] ;
unsigned int arr_10 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = -211979397311540899LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 3516106848U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -2014178874 : -1700672012;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = 1015945714U;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
