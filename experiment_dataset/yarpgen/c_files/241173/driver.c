#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2986010745U;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 3112977456U;
long long int var_6 = -1039740190763533994LL;
unsigned long long int var_7 = 2866058001758358555ULL;
unsigned char var_8 = (unsigned char)167;
unsigned int var_9 = 645885898U;
long long int var_10 = 6377821807862618394LL;
unsigned char var_11 = (unsigned char)27;
unsigned short var_12 = (unsigned short)16017;
unsigned int var_13 = 4259711607U;
unsigned int var_14 = 1450984553U;
_Bool var_15 = (_Bool)1;
unsigned long long int var_18 = 6231105199421352561ULL;
int zero = 0;
unsigned long long int var_19 = 11134665531140475009ULL;
unsigned int var_20 = 3468818248U;
unsigned short var_21 = (unsigned short)9153;
unsigned short var_22 = (unsigned short)17335;
unsigned long long int var_23 = 5055645413230164798ULL;
unsigned long long int var_24 = 3286986752740383325ULL;
unsigned int var_25 = 3330513737U;
long long int arr_0 [21] ;
unsigned short arr_4 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = -3287159174466382716LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)25428;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
