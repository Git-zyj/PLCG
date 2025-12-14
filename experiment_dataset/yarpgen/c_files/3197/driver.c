#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10427670203808592727ULL;
int var_1 = 1720490038;
unsigned long long int var_4 = 16613294426285982305ULL;
short var_5 = (short)-5193;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)47411;
int zero = 0;
signed char var_12 = (signed char)-23;
unsigned char var_13 = (unsigned char)194;
unsigned char var_14 = (unsigned char)172;
int var_15 = -445780722;
signed char var_16 = (signed char)85;
int var_17 = -654473582;
unsigned char var_18 = (unsigned char)241;
short var_19 = (short)21063;
unsigned long long int var_20 = 17446035759309144362ULL;
long long int arr_1 [20] ;
unsigned long long int arr_3 [20] ;
unsigned long long int arr_6 [20] ;
int arr_8 [20] [20] [20] ;
unsigned short arr_7 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = -3206363905500037037LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 9096312188280861196ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = 1048092116835432172ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 1745931048;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned short)10135 : (unsigned short)35359;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
