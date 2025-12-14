#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)63;
signed char var_1 = (signed char)-113;
_Bool var_3 = (_Bool)1;
short var_6 = (short)32436;
unsigned char var_8 = (unsigned char)219;
short var_11 = (short)4255;
unsigned long long int var_14 = 5254562366278865036ULL;
int var_15 = 1664217836;
int zero = 0;
short var_17 = (short)30726;
short var_18 = (short)6866;
_Bool var_19 = (_Bool)0;
int var_20 = -171645428;
unsigned char var_21 = (unsigned char)77;
unsigned long long int var_22 = 3306393487201048299ULL;
int var_23 = -1399142234;
signed char var_24 = (signed char)77;
_Bool var_25 = (_Bool)1;
_Bool var_26 = (_Bool)1;
long long int var_27 = 7554802043137707673LL;
_Bool var_28 = (_Bool)0;
signed char arr_1 [21] ;
_Bool arr_4 [21] [21] ;
short arr_5 [21] [21] [21] ;
unsigned short arr_10 [21] ;
long long int arr_15 [21] ;
int arr_20 [21] [21] ;
unsigned long long int arr_11 [21] [21] [21] [21] [21] ;
_Bool arr_22 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (signed char)92;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)16761;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (unsigned short)22924;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = -3048927702874807047LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_20 [i_0] [i_1] = 1838431445;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 320984437125290103ULL : 3945901744163480735ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_22 [i_0] = (_Bool)0;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
