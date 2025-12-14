#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1891617008;
unsigned int var_1 = 3615851990U;
unsigned short var_2 = (unsigned short)33787;
unsigned long long int var_3 = 2306692743284971957ULL;
short var_4 = (short)-13173;
unsigned char var_5 = (unsigned char)140;
int var_6 = -653605413;
unsigned long long int var_7 = 9727204266376046290ULL;
unsigned short var_8 = (unsigned short)59654;
unsigned char var_9 = (unsigned char)60;
_Bool var_10 = (_Bool)0;
unsigned long long int var_12 = 5472662865050021053ULL;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)10752;
unsigned int var_18 = 3452518888U;
int zero = 0;
unsigned short var_19 = (unsigned short)4109;
unsigned int var_20 = 3963697269U;
_Bool var_21 = (_Bool)0;
long long int var_22 = 2312307677338646903LL;
unsigned int var_23 = 3175566872U;
unsigned long long int arr_12 [13] [13] [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? 10422604471594630097ULL : 4685259424665746005ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
