#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 742985008;
unsigned char var_8 = (unsigned char)100;
int zero = 0;
unsigned int var_16 = 4221192990U;
unsigned int var_17 = 1294239501U;
unsigned int var_18 = 111933311U;
signed char var_19 = (signed char)-4;
int var_20 = -1022539745;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 2380520012094217408ULL;
unsigned char var_23 = (unsigned char)248;
int var_24 = 36201926;
unsigned int var_25 = 3979415945U;
unsigned long long int var_26 = 2552821972766292998ULL;
short var_27 = (short)14529;
signed char var_28 = (signed char)101;
unsigned short var_29 = (unsigned short)18680;
unsigned short var_30 = (unsigned short)14942;
unsigned int var_31 = 1550707662U;
unsigned short var_32 = (unsigned short)32767;
int var_33 = 643756918;
unsigned long long int arr_10 [12] ;
unsigned long long int arr_16 [12] [12] [12] [12] ;
_Bool arr_17 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = 4854550035885211796ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 6566650303095277617ULL : 16964910111580469547ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
