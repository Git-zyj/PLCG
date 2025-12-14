#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3173620094U;
long long int var_2 = -5997309455372083861LL;
short var_6 = (short)13666;
unsigned short var_7 = (unsigned short)50725;
unsigned short var_9 = (unsigned short)25362;
int zero = 0;
unsigned long long int var_10 = 15056564778003523544ULL;
unsigned long long int var_11 = 3769767490467540618ULL;
unsigned long long int var_12 = 15664594801586116979ULL;
unsigned short var_13 = (unsigned short)36089;
signed char var_14 = (signed char)118;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2704476311U;
short var_17 = (short)13987;
short arr_0 [16] [16] ;
short arr_3 [16] [16] ;
unsigned int arr_12 [21] ;
unsigned long long int arr_13 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-19421;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-274;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = 1505999442U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = 10724849735851961514ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
