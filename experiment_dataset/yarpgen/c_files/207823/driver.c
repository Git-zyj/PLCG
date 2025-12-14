#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)75;
unsigned char var_2 = (unsigned char)83;
signed char var_3 = (signed char)34;
unsigned char var_4 = (unsigned char)92;
signed char var_5 = (signed char)89;
unsigned long long int var_7 = 16951604696070156890ULL;
unsigned char var_9 = (unsigned char)11;
int var_11 = -318246532;
short var_15 = (short)-27712;
short var_16 = (short)-1462;
int zero = 0;
unsigned short var_17 = (unsigned short)10751;
int var_18 = -1228548027;
unsigned short var_19 = (unsigned short)44299;
int var_20 = -1235301701;
unsigned char arr_1 [22] [22] ;
int arr_3 [22] [22] [22] ;
unsigned short arr_5 [22] ;
unsigned long long int arr_6 [22] ;
signed char arr_7 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)180;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 221658753;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (unsigned short)20600;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 9089902513301297732ULL : 3980131028872114210ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (signed char)-53 : (signed char)70;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
