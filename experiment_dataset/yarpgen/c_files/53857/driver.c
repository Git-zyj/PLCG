#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)109;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)59478;
unsigned short var_5 = (unsigned short)28844;
long long int var_6 = 1764191645375928065LL;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 2097713769U;
short var_12 = (short)-19583;
unsigned int var_13 = 3586038573U;
signed char var_14 = (signed char)89;
int zero = 0;
unsigned char var_16 = (unsigned char)170;
unsigned int var_17 = 4037427784U;
signed char var_18 = (signed char)67;
unsigned short var_19 = (unsigned short)55693;
int var_20 = -1543704680;
long long int arr_2 [17] [17] ;
long long int arr_6 [21] [21] ;
long long int arr_3 [17] ;
_Bool arr_8 [21] ;
_Bool arr_9 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 4524954373239321286LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = 228181454027921530LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = -5848540011633100123LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
