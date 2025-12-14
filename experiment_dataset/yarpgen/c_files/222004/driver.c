#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)117;
unsigned short var_1 = (unsigned short)2507;
unsigned char var_5 = (unsigned char)214;
long long int var_6 = -314452129169883766LL;
long long int var_8 = 6803851728784004456LL;
unsigned int var_10 = 919108986U;
int var_13 = -1981017096;
unsigned int var_14 = 1348927271U;
signed char var_15 = (signed char)-22;
unsigned long long int var_19 = 893166570405846904ULL;
int zero = 0;
unsigned long long int var_20 = 14761847969529255428ULL;
int var_21 = 1749355892;
int var_22 = -1024460209;
unsigned char var_23 = (unsigned char)241;
unsigned char var_24 = (unsigned char)243;
signed char var_25 = (signed char)66;
signed char var_26 = (signed char)73;
unsigned short var_27 = (unsigned short)19232;
unsigned long long int var_28 = 69968504649819952ULL;
unsigned int arr_1 [10] ;
long long int arr_2 [10] [10] ;
unsigned long long int arr_8 [20] ;
_Bool arr_9 [20] ;
unsigned int arr_3 [10] [10] ;
unsigned int arr_7 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 3483816089U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 6050070068088533239LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = 9958161844766616595ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = 579826968U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 2847025093U : 4045491609U;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
