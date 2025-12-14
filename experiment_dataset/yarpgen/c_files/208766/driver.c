#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2949735939228663163ULL;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)87;
unsigned char var_7 = (unsigned char)66;
short var_8 = (short)-9124;
short var_9 = (short)7964;
unsigned char var_11 = (unsigned char)67;
unsigned short var_12 = (unsigned short)57891;
long long int var_13 = 5956467477453430957LL;
int var_15 = 229979188;
int zero = 0;
short var_17 = (short)-20913;
long long int var_18 = 650822613152502241LL;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 4283306370U;
unsigned int arr_0 [18] ;
unsigned char arr_3 [18] [18] ;
unsigned int arr_4 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 1153785936U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)185;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 2504744022U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
