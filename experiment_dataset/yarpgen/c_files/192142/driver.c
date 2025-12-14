#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)89;
int var_1 = -509357616;
unsigned char var_2 = (unsigned char)109;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)-9;
int var_5 = -161951941;
unsigned long long int var_7 = 1408918686028619001ULL;
signed char var_8 = (signed char)-48;
int zero = 0;
unsigned int var_10 = 1357476978U;
unsigned short var_11 = (unsigned short)13440;
signed char var_12 = (signed char)-110;
unsigned int var_13 = 1863507918U;
unsigned short var_14 = (unsigned short)40335;
int var_15 = 1610085392;
unsigned char var_16 = (unsigned char)53;
unsigned int var_17 = 1516970740U;
unsigned char var_18 = (unsigned char)34;
unsigned char var_19 = (unsigned char)244;
unsigned long long int var_20 = 11179089640044615155ULL;
_Bool var_21 = (_Bool)0;
unsigned int arr_1 [12] [12] ;
signed char arr_3 [12] ;
_Bool arr_4 [12] ;
unsigned int arr_6 [12] [12] [12] ;
long long int arr_9 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 445119731U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (signed char)-84;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 101336863U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = -418761355524013954LL;
}

void checksum() {
    hash(&seed, var_10);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
