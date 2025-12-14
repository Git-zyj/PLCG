#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)98;
long long int var_4 = -3545281465174023474LL;
signed char var_5 = (signed char)89;
unsigned char var_6 = (unsigned char)250;
unsigned short var_7 = (unsigned short)36363;
signed char var_8 = (signed char)94;
int zero = 0;
int var_10 = 985817547;
unsigned int var_11 = 3529064375U;
long long int var_12 = -4123795146109623573LL;
short var_13 = (short)3362;
unsigned short var_14 = (unsigned short)9415;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 23431163U;
long long int arr_2 [21] [21] ;
unsigned short arr_3 [21] ;
short arr_5 [21] [21] ;
int arr_6 [21] [21] [21] ;
int arr_9 [21] ;
long long int arr_10 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? -4837528768572787960LL : -3032315533784133182LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned short)2610;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (short)208;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -1439262165;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 826539581 : -492600418;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 2338834601755397497LL : 1291709528045215355LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
