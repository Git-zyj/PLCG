#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 537996071;
int var_6 = -927853207;
_Bool var_8 = (_Bool)1;
unsigned char var_10 = (unsigned char)81;
long long int var_12 = -6108814658679390259LL;
unsigned int var_15 = 167721731U;
int var_17 = -732123784;
int var_18 = 1264643674;
int zero = 0;
unsigned short var_19 = (unsigned short)44637;
_Bool var_20 = (_Bool)1;
long long int var_21 = -2694187919041874556LL;
unsigned short var_22 = (unsigned short)43082;
_Bool var_23 = (_Bool)1;
short var_24 = (short)6458;
unsigned int var_25 = 613506704U;
signed char var_26 = (signed char)-15;
unsigned int var_27 = 1868631539U;
unsigned short var_28 = (unsigned short)18520;
long long int var_29 = 6592123383599937091LL;
unsigned long long int var_30 = 10854556783842284178ULL;
long long int arr_1 [21] ;
int arr_2 [21] ;
unsigned int arr_3 [14] ;
signed char arr_6 [14] ;
_Bool arr_7 [14] [14] ;
unsigned char arr_15 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 2891306776783868075LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = -470036847;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 204353753U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (signed char)-61;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = (unsigned char)142;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
