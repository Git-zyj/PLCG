#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7392431882688751844LL;
signed char var_1 = (signed char)-56;
long long int var_2 = 6997938030235752332LL;
unsigned int var_3 = 2876763100U;
short var_5 = (short)25252;
unsigned char var_7 = (unsigned char)245;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)163;
signed char var_10 = (signed char)95;
unsigned char var_11 = (unsigned char)217;
long long int var_12 = -7524065774329491007LL;
long long int var_13 = 6748323527393730972LL;
long long int var_14 = 3399489497220269588LL;
signed char var_15 = (signed char)-95;
long long int var_16 = 3911420505677195955LL;
int var_17 = -487821600;
unsigned int var_18 = 2849607641U;
int zero = 0;
unsigned long long int var_19 = 14098982406775771356ULL;
signed char var_20 = (signed char)-114;
long long int var_21 = -489938349619665467LL;
short var_22 = (short)3500;
short var_23 = (short)953;
long long int arr_10 [13] ;
long long int arr_11 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = 3619560591537427203LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_11 [i_0] [i_1] = -6347841599807802289LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
