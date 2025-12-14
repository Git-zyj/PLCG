#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)73;
_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)1;
int var_4 = 1103023491;
int var_6 = 2006639007;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)-17;
signed char var_10 = (signed char)-90;
unsigned long long int var_12 = 8731404437726803161ULL;
signed char var_13 = (signed char)121;
int zero = 0;
int var_14 = 1755457219;
_Bool var_15 = (_Bool)1;
int var_16 = 95825941;
unsigned long long int var_17 = 14245334699457144671ULL;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)110;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 2891779165414743447ULL;
int arr_1 [22] [22] ;
signed char arr_2 [22] [22] ;
unsigned long long int arr_3 [22] [22] ;
int arr_5 [22] [22] [22] [22] ;
signed char arr_6 [22] [22] [22] ;
_Bool arr_10 [22] [22] [22] [22] ;
_Bool arr_8 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 859784302;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-126;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 14208124674532585037ULL : 1644870655344565715ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 1922792810;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)11;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
