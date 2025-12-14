#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6941075298387994290LL;
unsigned long long int var_12 = 14206006712570864920ULL;
unsigned short var_13 = (unsigned short)50770;
long long int var_15 = 196777980111514001LL;
int zero = 0;
int var_18 = 1278641669;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)30009;
unsigned char var_21 = (unsigned char)63;
unsigned short var_22 = (unsigned short)50645;
long long int var_23 = 2117150803350157233LL;
int var_24 = -1630700063;
unsigned long long int arr_0 [23] ;
unsigned short arr_1 [23] [23] ;
unsigned char arr_4 [25] ;
short arr_5 [25] ;
unsigned long long int arr_6 [25] ;
unsigned short arr_7 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 2616906142130846334ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)17108;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned char)236;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (short)10156;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = 12867445874528108819ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)59798;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
