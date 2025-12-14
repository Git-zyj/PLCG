#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)94;
unsigned short var_4 = (unsigned short)5585;
int var_8 = -77210083;
long long int var_9 = 4774877687644466802LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned long long int var_13 = 12524935262065585691ULL;
unsigned int var_14 = 4202863891U;
long long int var_15 = 8807793606599318951LL;
unsigned short var_16 = (unsigned short)65448;
long long int var_17 = -7931365198763398259LL;
long long int var_18 = 7336065063313919850LL;
unsigned short var_19 = (unsigned short)2168;
unsigned char var_20 = (unsigned char)21;
signed char var_21 = (signed char)-113;
unsigned long long int var_22 = 6489609947307889790ULL;
unsigned short arr_1 [20] ;
unsigned int arr_3 [20] [20] ;
unsigned long long int arr_5 [20] [20] ;
int arr_6 [20] [20] [20] ;
unsigned int arr_8 [20] [20] [20] [20] [20] ;
short arr_13 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned short)21106;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = 449488329U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = 11477055058085797371ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 705366400;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = 2429172754U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_13 [i_0] = (short)15661;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
