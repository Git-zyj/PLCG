#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)52;
unsigned long long int var_3 = 14532721484575550384ULL;
signed char var_6 = (signed char)-49;
short var_7 = (short)-14574;
_Bool var_9 = (_Bool)1;
short var_12 = (short)-19490;
long long int var_16 = 6277696275191759523LL;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 57167588U;
int zero = 0;
unsigned long long int var_20 = 13612411567025109425ULL;
unsigned long long int var_21 = 6954960558890765364ULL;
int var_22 = -2006487384;
unsigned short var_23 = (unsigned short)3442;
unsigned char var_24 = (unsigned char)172;
unsigned long long int var_25 = 1634557936835219445ULL;
unsigned short var_26 = (unsigned short)5046;
long long int var_27 = 3863644642041103161LL;
int arr_2 [22] [22] ;
unsigned long long int arr_7 [22] [22] [22] ;
_Bool arr_10 [22] [22] [22] [22] [22] [22] ;
signed char arr_12 [22] ;
long long int arr_19 [19] ;
signed char arr_14 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 1491056953;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 1206856584621472235ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = (signed char)-23;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_19 [i_0] = 1497849012809331841LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_14 [i_0] [i_1] = (signed char)96;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
