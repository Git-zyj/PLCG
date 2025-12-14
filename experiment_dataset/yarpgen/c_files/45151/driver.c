#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-87;
unsigned long long int var_1 = 17748185864135399209ULL;
signed char var_2 = (signed char)-70;
int var_4 = -1256314025;
unsigned short var_5 = (unsigned short)56155;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)19275;
signed char var_9 = (signed char)7;
signed char var_10 = (signed char)102;
unsigned short var_11 = (unsigned short)14205;
unsigned long long int var_13 = 18256954662734496912ULL;
unsigned long long int var_15 = 9537612668929300747ULL;
int zero = 0;
unsigned long long int var_16 = 15234089572850942033ULL;
unsigned int var_17 = 3788458655U;
short var_18 = (short)-25167;
short var_19 = (short)-19817;
unsigned long long int var_20 = 9864118472056109295ULL;
short var_21 = (short)4631;
int var_22 = 1329364416;
int var_23 = 1490842946;
unsigned short var_24 = (unsigned short)58352;
int var_25 = 1588950242;
unsigned int var_26 = 256939914U;
unsigned long long int var_27 = 18328654049087683323ULL;
signed char var_28 = (signed char)1;
unsigned long long int var_29 = 4395135860840430275ULL;
unsigned long long int arr_2 [14] ;
signed char arr_4 [14] ;
int arr_7 [14] [14] [14] ;
unsigned char arr_9 [20] [20] ;
unsigned char arr_10 [20] ;
int arr_11 [20] [20] [20] ;
unsigned char arr_17 [20] ;
unsigned short arr_19 [20] [20] [20] [20] [20] ;
unsigned short arr_22 [20] [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 17667985428434133575ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (signed char)118;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -1765124572;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)195;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 1786002313;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_17 [i_0] = (unsigned char)25;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (unsigned short)16367 : (unsigned short)5737;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)1608;
}

void checksum() {
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
