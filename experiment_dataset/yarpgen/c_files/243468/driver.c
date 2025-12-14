#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-56;
signed char var_1 = (signed char)-11;
unsigned int var_2 = 751092876U;
short var_3 = (short)-18207;
int var_4 = -764055740;
long long int var_5 = 710943869084004021LL;
short var_6 = (short)26049;
long long int var_7 = 3431466190051129056LL;
unsigned long long int var_8 = 14331077830472988833ULL;
int zero = 0;
long long int var_10 = 4358309805813698224LL;
short var_11 = (short)-29511;
unsigned int var_12 = 380356238U;
unsigned int var_13 = 2845716714U;
unsigned long long int var_14 = 6819288181816984984ULL;
unsigned char var_15 = (unsigned char)205;
int var_16 = 852755426;
unsigned short var_17 = (unsigned short)23917;
int var_18 = 1992504073;
long long int var_19 = -3244784068652799183LL;
unsigned char var_20 = (unsigned char)139;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 13641726777095892359ULL;
unsigned short var_23 = (unsigned short)17945;
long long int var_24 = -7888042138260843206LL;
unsigned char var_25 = (unsigned char)167;
unsigned long long int arr_0 [25] [25] ;
unsigned int arr_1 [25] ;
long long int arr_2 [25] ;
unsigned long long int arr_4 [25] [25] ;
unsigned long long int arr_5 [25] [25] ;
_Bool arr_6 [25] ;
unsigned char arr_7 [25] [25] ;
signed char arr_9 [25] [25] ;
short arr_12 [14] ;
long long int arr_10 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 17610919186132579260ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 4003667254U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 7639120408506178187LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = 7642568922309751243ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = 5044030991059385894ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)132;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)51;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (short)-5523;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = -7111384470894487303LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
