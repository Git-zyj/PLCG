#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1652938790U;
unsigned long long int var_3 = 10088863177232272512ULL;
unsigned char var_4 = (unsigned char)58;
short var_5 = (short)-4953;
short var_9 = (short)-31393;
long long int var_10 = 788336332495459642LL;
long long int var_11 = -3466394150407715446LL;
unsigned long long int var_18 = 8236010302104957149ULL;
int zero = 0;
short var_19 = (short)13432;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 2050253298U;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)89;
unsigned short var_25 = (unsigned short)44029;
long long int var_26 = -6329624686668639555LL;
unsigned short var_27 = (unsigned short)24097;
unsigned char var_28 = (unsigned char)121;
unsigned short var_29 = (unsigned short)26062;
unsigned char var_30 = (unsigned char)119;
_Bool var_31 = (_Bool)0;
int arr_1 [20] [20] ;
int arr_4 [20] [20] [20] ;
unsigned int arr_6 [20] [20] [20] ;
signed char arr_7 [20] ;
_Bool arr_9 [20] [20] [20] [20] ;
int arr_18 [20] [20] [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = -98626418;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 71462009;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 1357202297U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (signed char)18;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 2009460992;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
