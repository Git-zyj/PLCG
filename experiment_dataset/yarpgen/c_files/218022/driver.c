#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)5915;
long long int var_3 = 8590612808824517075LL;
unsigned long long int var_4 = 4218559103954626251ULL;
int var_7 = 856644871;
signed char var_8 = (signed char)34;
unsigned int var_9 = 2394286541U;
int var_10 = -56928696;
unsigned char var_12 = (unsigned char)123;
short var_13 = (short)-23142;
int zero = 0;
short var_17 = (short)30373;
unsigned short var_18 = (unsigned short)45959;
long long int var_19 = 2045518028475943308LL;
short var_20 = (short)22983;
unsigned int var_21 = 2331659750U;
unsigned long long int var_22 = 12206970892244356905ULL;
short var_23 = (short)13582;
long long int arr_2 [16] ;
short arr_3 [16] ;
unsigned int arr_4 [16] ;
unsigned short arr_5 [16] [16] [16] ;
unsigned short arr_6 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 7112935987532848999LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)-1177 : (short)-2339;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 3573405191U : 1950169674U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)19138 : (unsigned short)41763;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)43981 : (unsigned short)10232;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
