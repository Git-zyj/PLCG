#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 6923320243797520234LL;
unsigned long long int var_2 = 7285679146061381885ULL;
unsigned int var_3 = 3953448809U;
unsigned short var_9 = (unsigned short)43589;
unsigned char var_10 = (unsigned char)122;
unsigned int var_11 = 3298745796U;
short var_13 = (short)-27566;
unsigned int var_14 = 2741077214U;
short var_15 = (short)10214;
int zero = 0;
unsigned long long int var_16 = 18206879598075116659ULL;
long long int var_17 = -2764254861786057325LL;
long long int var_18 = 948347444733599027LL;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 970500199U;
long long int var_22 = -8540289752946671809LL;
unsigned long long int var_23 = 15422802081338943979ULL;
long long int var_24 = 8543563855655049291LL;
unsigned int var_25 = 3137411587U;
unsigned int var_26 = 2215715521U;
signed char var_27 = (signed char)124;
long long int arr_12 [21] [21] [21] [21] ;
unsigned char arr_13 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -1198366672057597889LL : 3707895349155241331LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)141 : (unsigned char)111;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
