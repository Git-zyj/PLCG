#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2485003589827160721LL;
int var_3 = 2026857378;
unsigned short var_4 = (unsigned short)46167;
int var_6 = 1459496115;
unsigned char var_7 = (unsigned char)23;
_Bool var_8 = (_Bool)1;
int var_11 = 679241080;
unsigned short var_14 = (unsigned short)3505;
int var_15 = 2066754469;
long long int var_16 = 723433636164906361LL;
long long int var_17 = -8890825549289766006LL;
long long int var_19 = -617134699204157262LL;
int zero = 0;
long long int var_20 = 8536108406559614805LL;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)1;
int var_23 = 1106444262;
unsigned char var_24 = (unsigned char)132;
unsigned char var_25 = (unsigned char)113;
unsigned short arr_0 [17] ;
int arr_2 [17] [17] [17] ;
unsigned char arr_3 [17] [17] ;
int arr_7 [17] ;
unsigned char arr_9 [17] [17] [17] [17] [17] ;
unsigned short arr_11 [17] [17] ;
unsigned char arr_12 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned short)48274;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -1696782116;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)180;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 1474523912 : -616665572;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)224;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)15049;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = (unsigned char)233;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
