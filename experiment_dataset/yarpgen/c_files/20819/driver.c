#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 12615384471952256816ULL;
int var_5 = 1591262600;
unsigned char var_7 = (unsigned char)56;
short var_8 = (short)-32557;
short var_10 = (short)10877;
signed char var_13 = (signed char)66;
unsigned char var_16 = (unsigned char)54;
int zero = 0;
unsigned long long int var_17 = 8251053604954493062ULL;
int var_18 = -587100903;
unsigned char var_19 = (unsigned char)1;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)82;
unsigned short var_22 = (unsigned short)8069;
signed char var_23 = (signed char)-71;
unsigned long long int var_24 = 4773177443650517985ULL;
int var_25 = -1099170108;
signed char var_26 = (signed char)60;
unsigned long long int var_27 = 12682765893113814571ULL;
_Bool arr_0 [10] ;
_Bool arr_1 [10] ;
unsigned short arr_2 [10] ;
unsigned long long int arr_3 [10] ;
long long int arr_4 [10] ;
signed char arr_6 [10] [10] [10] ;
signed char arr_7 [10] [10] [10] [10] ;
int arr_8 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned short)17056;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 683588185459223052ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 2768870715044179002LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)84;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (signed char)-8;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = -1227877757;
}

void checksum() {
    hash(&seed, var_17);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
