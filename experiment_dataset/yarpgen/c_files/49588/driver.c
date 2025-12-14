#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18596;
int var_1 = 1096361414;
unsigned int var_2 = 1295839743U;
short var_7 = (short)20231;
unsigned char var_8 = (unsigned char)206;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 356808343U;
unsigned int var_12 = 3475011388U;
short var_14 = (short)-12099;
long long int var_15 = -90725865359661948LL;
int zero = 0;
short var_16 = (short)-10270;
int var_17 = -770428454;
int var_18 = -1220246651;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)10326;
short var_21 = (short)188;
int var_22 = -2000011601;
unsigned char var_23 = (unsigned char)67;
int var_24 = 529429388;
long long int var_25 = 4246330791184701488LL;
unsigned short arr_0 [23] ;
short arr_1 [23] [23] ;
int arr_4 [23] [23] [23] ;
long long int arr_6 [23] [23] [23] [23] ;
unsigned int arr_9 [23] [23] ;
unsigned long long int arr_13 [10] ;
_Bool arr_14 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned short)36749;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-21914;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -1951072504;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 8139139565009383976LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = 175706803U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = 10919846522800271867ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (_Bool)0;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
