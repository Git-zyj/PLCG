#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -203640353264804948LL;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 552331763U;
int var_4 = 1662356268;
long long int var_5 = 8113814592651818353LL;
unsigned char var_6 = (unsigned char)47;
signed char var_9 = (signed char)-48;
int zero = 0;
int var_10 = -1027456786;
int var_11 = 860925508;
int var_12 = 1735504309;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 1045907537U;
unsigned short var_15 = (unsigned short)43129;
long long int var_16 = -8349571197992483608LL;
unsigned short var_17 = (unsigned short)10178;
unsigned long long int var_18 = 4079916334837685503ULL;
signed char var_19 = (signed char)122;
long long int var_20 = -8944081619884534254LL;
long long int arr_0 [14] [14] ;
_Bool arr_1 [14] ;
long long int arr_2 [16] [16] ;
unsigned int arr_3 [16] [16] ;
unsigned short arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 2213962818724645329LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = 3961944812056659219LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = 4013038976U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (unsigned short)63880;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
