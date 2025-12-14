#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)18744;
int var_2 = -813584998;
long long int var_3 = 4765778710837411945LL;
int var_4 = -1756333459;
unsigned short var_5 = (unsigned short)25961;
short var_6 = (short)-19740;
long long int var_8 = -5550779677154676774LL;
unsigned int var_9 = 3830841791U;
int var_10 = 1976552356;
unsigned char var_12 = (unsigned char)1;
unsigned char var_14 = (unsigned char)159;
unsigned int var_15 = 214585743U;
int zero = 0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-12081;
int var_18 = 986662817;
long long int var_19 = -6844316715499752205LL;
unsigned char var_20 = (unsigned char)165;
unsigned short var_21 = (unsigned short)25159;
signed char var_22 = (signed char)-100;
unsigned int arr_3 [21] ;
int arr_13 [21] [21] [21] [21] [21] ;
long long int arr_16 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 2011677359U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? -25079650 : 444357377;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_16 [i_0] = 3282562217469714797LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
