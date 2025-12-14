#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1872731193304961836ULL;
int var_1 = 324457508;
long long int var_2 = 428320351884797847LL;
signed char var_4 = (signed char)-63;
short var_6 = (short)-16693;
unsigned int var_7 = 3540082499U;
long long int var_8 = 3100739728654688279LL;
unsigned int var_9 = 1211894046U;
int var_10 = 686584637;
unsigned int var_11 = 173378734U;
int zero = 0;
long long int var_13 = -2500507023938373454LL;
unsigned int var_14 = 2070363281U;
unsigned short var_15 = (unsigned short)13416;
unsigned int var_16 = 886850303U;
unsigned long long int var_17 = 18218231271064566301ULL;
unsigned int var_18 = 1145554252U;
int var_19 = -1953995343;
long long int var_20 = 991357192481546293LL;
unsigned short var_21 = (unsigned short)17572;
unsigned long long int var_22 = 16569013291383304026ULL;
signed char var_23 = (signed char)-50;
long long int var_24 = 1704135366489970244LL;
unsigned int var_25 = 2091140366U;
unsigned short arr_0 [10] ;
int arr_2 [10] ;
unsigned int arr_3 [10] [10] ;
unsigned short arr_4 [10] [10] [10] ;
signed char arr_8 [10] [10] [10] [10] ;
signed char arr_10 [10] [10] [10] [10] ;
unsigned int arr_15 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned short)46347;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2037239559 : -369199470;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 1891900389U : 4159909996U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)58937;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)72 : (signed char)-52;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (signed char)-83;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 2024434126U;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
