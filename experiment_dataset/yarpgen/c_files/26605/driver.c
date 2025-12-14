#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)16607;
short var_2 = (short)-26279;
long long int var_3 = -1327181208733243422LL;
signed char var_4 = (signed char)-53;
unsigned char var_6 = (unsigned char)111;
unsigned int var_8 = 3397938262U;
short var_9 = (short)-17039;
int var_10 = -1644306940;
short var_11 = (short)-3175;
unsigned int var_12 = 1515048813U;
unsigned short var_13 = (unsigned short)159;
unsigned short var_14 = (unsigned short)41076;
signed char var_15 = (signed char)29;
unsigned long long int var_16 = 10003695345163300064ULL;
unsigned char var_17 = (unsigned char)140;
int var_18 = 1159869315;
unsigned long long int var_19 = 14963425822482127580ULL;
int zero = 0;
signed char var_20 = (signed char)-124;
short var_21 = (short)-22807;
signed char var_22 = (signed char)53;
unsigned int var_23 = 1098515471U;
signed char var_24 = (signed char)12;
signed char arr_1 [24] ;
short arr_2 [24] ;
_Bool arr_3 [24] ;
unsigned short arr_4 [24] [24] [24] ;
unsigned char arr_6 [24] [24] [24] [24] ;
unsigned short arr_7 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)122;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (short)-26400;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)60096;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned char)7;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (unsigned short)8554;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_6 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
