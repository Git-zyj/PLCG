#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1068852051;
unsigned char var_3 = (unsigned char)175;
signed char var_5 = (signed char)-95;
unsigned short var_8 = (unsigned short)29049;
long long int var_12 = 1852904782903777441LL;
unsigned int var_13 = 158307094U;
int zero = 0;
unsigned int var_19 = 2786595538U;
unsigned char var_20 = (unsigned char)10;
unsigned short var_21 = (unsigned short)4920;
unsigned int var_22 = 3027561317U;
unsigned short var_23 = (unsigned short)60115;
long long int var_24 = -1028438683906149889LL;
unsigned long long int var_25 = 1041443277048109352ULL;
unsigned char var_26 = (unsigned char)17;
unsigned int var_27 = 30076421U;
_Bool var_28 = (_Bool)0;
signed char var_29 = (signed char)-5;
unsigned short var_30 = (unsigned short)44625;
unsigned short var_31 = (unsigned short)7025;
int var_32 = -1765775307;
unsigned long long int arr_0 [19] [19] ;
_Bool arr_1 [19] [19] ;
unsigned long long int arr_2 [17] ;
signed char arr_4 [17] ;
unsigned int arr_5 [17] [17] [17] ;
short arr_6 [17] [17] [17] ;
unsigned int arr_7 [17] [17] ;
long long int arr_8 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 94178603570197582ULL : 16838786254096456970ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 9823726110894083563ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (signed char)2;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1300445338U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)22886;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = 3862656572U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = 461951544328562843LL;
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
