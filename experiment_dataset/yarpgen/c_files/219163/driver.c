#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 388675547;
unsigned long long int var_2 = 11191355322934482341ULL;
short var_3 = (short)-28557;
unsigned long long int var_4 = 9657918541612575028ULL;
short var_5 = (short)-22033;
signed char var_6 = (signed char)57;
unsigned char var_7 = (unsigned char)182;
unsigned int var_8 = 2785568038U;
unsigned int var_9 = 3621293832U;
signed char var_14 = (signed char)-110;
int zero = 0;
unsigned int var_15 = 646715170U;
long long int var_16 = 1807217690563691498LL;
unsigned char var_17 = (unsigned char)28;
unsigned long long int var_18 = 15059136728404516093ULL;
unsigned int var_19 = 3593046264U;
unsigned short var_20 = (unsigned short)4996;
unsigned long long int var_21 = 14905018417171911298ULL;
unsigned long long int var_22 = 10450942238527688381ULL;
signed char var_23 = (signed char)109;
unsigned long long int var_24 = 6866101561390585015ULL;
signed char var_25 = (signed char)-89;
unsigned long long int var_26 = 6853401796878365147ULL;
long long int var_27 = 328112114623093486LL;
unsigned long long int var_28 = 10673824352619865653ULL;
unsigned int var_29 = 3516590967U;
unsigned char var_30 = (unsigned char)40;
long long int var_31 = 7283408058938037075LL;
unsigned char var_32 = (unsigned char)207;
unsigned int arr_0 [23] [23] ;
unsigned char arr_1 [23] ;
signed char arr_2 [23] [23] ;
signed char arr_3 [23] ;
signed char arr_4 [23] [23] [23] [23] ;
unsigned int arr_6 [23] [23] [23] ;
signed char arr_7 [23] [23] [23] [23] ;
unsigned char arr_11 [23] ;
unsigned short arr_12 [24] [24] ;
signed char arr_13 [24] ;
unsigned long long int arr_16 [24] ;
_Bool arr_18 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 981655634U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned char)160;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)123;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (signed char)-79;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (signed char)-13;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 1397539687U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (signed char)-2;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (unsigned char)159;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)16458 : (unsigned short)28854;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (signed char)120 : (signed char)65;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 11120372689942352244ULL : 5779180146561035494ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (_Bool)0;
}

void checksum() {
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
