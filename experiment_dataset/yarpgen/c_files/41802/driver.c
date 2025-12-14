#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2074309460;
signed char var_1 = (signed char)-56;
int var_2 = -292330794;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)6156;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 129713513U;
_Bool var_7 = (_Bool)1;
int var_8 = -1340575542;
signed char var_9 = (signed char)-6;
unsigned short var_10 = (unsigned short)60997;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 411292424U;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)40121;
unsigned int var_15 = 190158797U;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)24204;
unsigned short var_18 = (unsigned short)27901;
unsigned short var_19 = (unsigned short)25821;
unsigned short var_20 = (unsigned short)58336;
signed char var_21 = (signed char)60;
signed char var_22 = (signed char)95;
_Bool var_23 = (_Bool)1;
_Bool var_24 = (_Bool)1;
unsigned short var_25 = (unsigned short)21981;
signed char var_26 = (signed char)31;
signed char arr_1 [10] [10] ;
int arr_2 [10] ;
signed char arr_3 [10] [10] [10] ;
signed char arr_4 [10] [10] ;
unsigned short arr_5 [10] [10] ;
unsigned short arr_6 [10] [10] [10] [10] ;
int arr_7 [10] [10] [10] ;
unsigned int arr_8 [10] [10] ;
_Bool arr_11 [10] [10] [10] [10] ;
unsigned short arr_13 [10] [10] ;
unsigned short arr_14 [10] [10] [10] [10] [10] [10] [10] ;
signed char arr_21 [17] ;
unsigned short arr_22 [17] ;
int arr_23 [17] [17] [17] ;
unsigned short arr_25 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)106;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1500232249 : 601915436;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)-103;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)24 : (signed char)68;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)49781;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned short)31923;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -4899469 : -1679461212;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = 2267014472U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)37924 : (unsigned short)58977;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 10; ++i_6) 
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)65195;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_21 [i_0] = (signed char)-15;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_22 [i_0] = (unsigned short)22360;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = -1949787601;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_25 [i_0] = (unsigned short)47658;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
