#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28305;
unsigned long long int var_4 = 12662468353397563615ULL;
unsigned char var_6 = (unsigned char)13;
_Bool var_7 = (_Bool)1;
long long int var_8 = 8463767757944220733LL;
unsigned long long int var_9 = 1535258098561362108ULL;
unsigned long long int var_10 = 12934409212182426711ULL;
long long int var_11 = 3032720753407959073LL;
unsigned long long int var_12 = 596094904656400761ULL;
unsigned short var_15 = (unsigned short)64884;
unsigned long long int var_17 = 13307959244205165561ULL;
long long int var_18 = -8575954933183868068LL;
int zero = 0;
int var_19 = -1277074800;
short var_20 = (short)28115;
int var_21 = 395178058;
unsigned short var_22 = (unsigned short)38449;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)141;
unsigned short var_25 = (unsigned short)30114;
long long int arr_1 [13] ;
unsigned char arr_2 [13] ;
unsigned int arr_3 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 3776955204910903216LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned char)137;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1886757833U;
}

void checksum() {
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
