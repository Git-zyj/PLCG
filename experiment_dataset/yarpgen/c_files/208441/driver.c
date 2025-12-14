#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)43949;
long long int var_3 = 1671119255250071837LL;
unsigned int var_4 = 1210933592U;
short var_5 = (short)-27767;
unsigned int var_6 = 3342441522U;
unsigned int var_7 = 125849684U;
signed char var_8 = (signed char)122;
short var_10 = (short)-26832;
int var_11 = 719902998;
unsigned char var_12 = (unsigned char)67;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 11600424873170213926ULL;
unsigned int var_15 = 3312238486U;
unsigned char var_16 = (unsigned char)103;
signed char var_17 = (signed char)27;
unsigned char var_18 = (unsigned char)76;
int var_19 = 404712322;
int var_20 = 2041017665;
signed char var_21 = (signed char)50;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 2292169028U;
unsigned short arr_0 [16] ;
unsigned int arr_1 [16] [16] ;
signed char arr_2 [16] ;
unsigned char arr_3 [16] ;
long long int arr_6 [16] [16] [16] ;
unsigned long long int arr_9 [16] [16] [16] [16] ;
short arr_10 [16] [16] [16] [16] [16] [16] ;
short arr_18 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)53176;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 1516862793U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (signed char)-30;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned char)106;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -4257949886927348645LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 1921544579177495204ULL : 15354860394763256204ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)24717;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_18 [i_0] [i_1] = (short)19907;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
