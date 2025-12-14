#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3716175354U;
unsigned short var_3 = (unsigned short)52399;
unsigned int var_7 = 827786288U;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)-116;
unsigned char var_11 = (unsigned char)236;
long long int var_13 = 3555282078884351591LL;
unsigned short var_14 = (unsigned short)34454;
unsigned short var_15 = (unsigned short)8659;
int var_16 = -85235037;
int zero = 0;
int var_19 = 407402023;
int var_20 = 2146808003;
unsigned long long int var_21 = 5253194688748190269ULL;
unsigned int var_22 = 2559709576U;
unsigned char var_23 = (unsigned char)78;
unsigned long long int var_24 = 8534057755258165724ULL;
unsigned int var_25 = 1526311360U;
unsigned short var_26 = (unsigned short)24092;
unsigned short var_27 = (unsigned short)13286;
_Bool var_28 = (_Bool)1;
_Bool var_29 = (_Bool)0;
unsigned short arr_0 [10] [10] ;
signed char arr_2 [10] ;
unsigned int arr_3 [10] ;
unsigned char arr_6 [10] ;
short arr_7 [10] ;
long long int arr_18 [25] [25] [25] [25] ;
unsigned long long int arr_4 [10] ;
unsigned short arr_19 [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)12340;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (signed char)8;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 2535908858U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (unsigned char)15;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (short)4040;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = -5385029265964624081LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 7402708972444505423ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)39669 : (unsigned short)62903;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
