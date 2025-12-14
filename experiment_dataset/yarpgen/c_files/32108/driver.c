#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)36;
unsigned long long int var_3 = 11998416801882809958ULL;
long long int var_5 = -36939225711289496LL;
int var_7 = 479798860;
unsigned char var_9 = (unsigned char)14;
unsigned int var_15 = 2019768207U;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 1419262196994373093ULL;
unsigned short var_21 = (unsigned short)22841;
int var_22 = -1469061440;
signed char var_23 = (signed char)-107;
unsigned char var_24 = (unsigned char)81;
short var_25 = (short)-28897;
long long int var_26 = -1320709041874434341LL;
_Bool var_27 = (_Bool)1;
unsigned short arr_0 [22] ;
long long int arr_1 [22] ;
unsigned char arr_3 [22] [22] [22] ;
short arr_6 [22] ;
short arr_4 [22] ;
_Bool arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned short)50710;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 6368728536632632954LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)246;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (short)32657;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (short)4356;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
