#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned short var_20 = (unsigned short)34607;
signed char var_21 = (signed char)123;
unsigned char var_22 = (unsigned char)11;
unsigned short var_23 = (unsigned short)11854;
unsigned long long int var_24 = 17475254761749377470ULL;
long long int var_25 = -6308562526668712334LL;
_Bool var_26 = (_Bool)1;
_Bool var_27 = (_Bool)0;
long long int var_28 = -4749315424401795508LL;
unsigned short var_29 = (unsigned short)2324;
unsigned char var_30 = (unsigned char)40;
unsigned char var_31 = (unsigned char)207;
unsigned short var_32 = (unsigned short)9103;
unsigned char var_33 = (unsigned char)146;
long long int var_34 = -6276992172604639905LL;
_Bool arr_0 [22] ;
unsigned short arr_4 [22] [22] ;
unsigned long long int arr_7 [22] [22] ;
long long int arr_8 [22] [22] [22] ;
long long int arr_13 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)16708;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = 6574806295249923752ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 6829715972211496963LL : 3704511585193983604LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = -2369073745335103522LL;
}

void checksum() {
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
