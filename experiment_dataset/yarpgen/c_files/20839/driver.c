#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-80;
unsigned char var_1 = (unsigned char)221;
unsigned int var_2 = 963872059U;
long long int var_3 = 6960653010313106814LL;
int var_4 = -661365497;
unsigned long long int var_5 = 8443448517407039351ULL;
unsigned char var_8 = (unsigned char)242;
signed char var_10 = (signed char)106;
unsigned char var_11 = (unsigned char)209;
unsigned char var_12 = (unsigned char)54;
int var_15 = 1238928289;
int zero = 0;
unsigned int var_18 = 3716143648U;
unsigned short var_19 = (unsigned short)5878;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)9;
unsigned char var_22 = (unsigned char)237;
unsigned char var_23 = (unsigned char)11;
int var_24 = 1137812594;
int var_25 = 84921380;
unsigned short var_26 = (unsigned short)10051;
signed char var_27 = (signed char)-49;
long long int var_28 = -3445479142996663852LL;
unsigned char var_29 = (unsigned char)48;
long long int var_30 = 8258694694661840252LL;
unsigned short arr_2 [25] ;
_Bool arr_3 [25] [25] ;
unsigned short arr_7 [25] [25] [25] ;
unsigned char arr_12 [25] [25] [25] ;
unsigned int arr_17 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned short)30012;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)10177 : (unsigned short)13446;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)87 : (unsigned char)250;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 1435259446U : 1295232442U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
