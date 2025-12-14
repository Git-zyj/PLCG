#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-123;
_Bool var_3 = (_Bool)1;
unsigned char var_7 = (unsigned char)209;
int var_12 = 898434648;
unsigned char var_13 = (unsigned char)238;
int var_15 = -270033759;
signed char var_16 = (signed char)-58;
int zero = 0;
short var_17 = (short)9820;
unsigned int var_18 = 1811541418U;
long long int var_19 = -214996396481791657LL;
unsigned char var_20 = (unsigned char)44;
unsigned long long int var_21 = 9257306966261106343ULL;
signed char var_22 = (signed char)-28;
unsigned char var_23 = (unsigned char)73;
_Bool var_24 = (_Bool)1;
unsigned long long int var_25 = 10924367634781239138ULL;
int var_26 = -2131666654;
int var_27 = 1822629585;
_Bool var_28 = (_Bool)1;
unsigned long long int var_29 = 5592123766764494866ULL;
signed char var_30 = (signed char)-26;
int arr_0 [10] [10] ;
long long int arr_1 [10] ;
int arr_2 [10] [10] ;
unsigned int arr_4 [10] [10] ;
signed char arr_5 [10] [10] [10] ;
unsigned int arr_10 [24] ;
unsigned int arr_11 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = -193222486;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 8170746671954474126LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 1079799103 : 1435925258;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = 942232182U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)66;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = 4168701939U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = 1121638369U;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
