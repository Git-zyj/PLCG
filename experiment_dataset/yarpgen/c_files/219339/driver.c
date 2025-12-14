#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -163982620;
unsigned long long int var_1 = 16774384918587157956ULL;
unsigned int var_2 = 4178656449U;
unsigned char var_3 = (unsigned char)228;
signed char var_4 = (signed char)124;
unsigned short var_5 = (unsigned short)18135;
unsigned long long int var_6 = 88204301716611021ULL;
unsigned int var_7 = 1844111481U;
unsigned long long int var_8 = 1034665269492455296ULL;
long long int var_9 = 5247533373773843279LL;
int zero = 0;
unsigned long long int var_10 = 4196662142505670780ULL;
unsigned int var_11 = 156399259U;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 2750773335U;
unsigned char var_14 = (unsigned char)163;
unsigned int var_15 = 1139554161U;
short var_16 = (short)5796;
short var_17 = (short)-32564;
unsigned int var_18 = 3174473254U;
short var_19 = (short)-9114;
int var_20 = -992506412;
int var_21 = -729967578;
unsigned int var_22 = 947063613U;
unsigned long long int var_23 = 16444382471701687221ULL;
unsigned char var_24 = (unsigned char)9;
unsigned long long int arr_20 [23] [23] ;
int arr_21 [23] [23] [23] [23] ;
short arr_22 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_20 [i_0] [i_1] = (i_1 % 2 == 0) ? 10477578555232813892ULL : 7683962154859823305ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -1593637975 : 408662645;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-20583 : (short)-7303;
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
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
