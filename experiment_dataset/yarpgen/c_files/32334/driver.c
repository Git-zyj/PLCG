#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2588260571U;
unsigned int var_2 = 2793095303U;
unsigned char var_3 = (unsigned char)50;
unsigned long long int var_4 = 2970350308103138228ULL;
_Bool var_5 = (_Bool)1;
signed char var_7 = (signed char)-109;
unsigned int var_9 = 3628038782U;
unsigned long long int var_10 = 15078140605617468821ULL;
int zero = 0;
unsigned long long int var_13 = 15573876352328274588ULL;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 12945324920483998834ULL;
unsigned short var_17 = (unsigned short)43140;
unsigned int var_18 = 3635779512U;
unsigned int var_19 = 992356323U;
unsigned long long int var_20 = 6791815512795173967ULL;
unsigned int var_21 = 2131705695U;
unsigned int var_22 = 2803252142U;
unsigned short var_23 = (unsigned short)52251;
_Bool var_24 = (_Bool)1;
unsigned short var_25 = (unsigned short)32941;
unsigned int arr_0 [25] [25] ;
_Bool arr_1 [25] [25] ;
short arr_10 [25] [25] [25] [25] ;
short arr_11 [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 2713039484U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (short)-30526;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (short)24545;
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
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
