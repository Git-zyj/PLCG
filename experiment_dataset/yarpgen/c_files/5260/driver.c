#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 721289028800493654ULL;
unsigned long long int var_3 = 2771444410522272919ULL;
long long int var_6 = -7012909475737821747LL;
unsigned long long int var_7 = 15572557963528450860ULL;
long long int var_8 = 6628255101758562995LL;
unsigned long long int var_9 = 11072103593095557154ULL;
long long int var_12 = -6869695187303159806LL;
unsigned long long int var_14 = 310186804175307883ULL;
long long int var_15 = 8718540138680231581LL;
unsigned long long int var_16 = 9330132347269734091ULL;
long long int var_17 = 4148368568109447098LL;
int zero = 0;
unsigned long long int var_18 = 17809228717894148876ULL;
long long int var_19 = -6993109185015631653LL;
unsigned long long int var_20 = 13195213121183190783ULL;
long long int var_21 = -8058191350904832754LL;
unsigned long long int var_22 = 13249160596560566478ULL;
unsigned long long int var_23 = 10590921726569490220ULL;
unsigned long long int var_24 = 8344162252709352578ULL;
unsigned long long int var_25 = 5967658839672225289ULL;
long long int var_26 = 5465974096332671004LL;
long long int var_27 = -3312111516088127024LL;
long long int arr_1 [10] [10] ;
long long int arr_4 [15] ;
unsigned long long int arr_5 [15] ;
unsigned long long int arr_8 [21] [21] ;
unsigned long long int arr_9 [21] ;
unsigned long long int arr_2 [10] ;
unsigned long long int arr_3 [10] [10] ;
unsigned long long int arr_6 [15] ;
long long int arr_7 [15] ;
long long int arr_10 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = -1710394885717943365LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = -638438252927994425LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 6146243223819577859ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = 3954707216278634334ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = 11874875732467800115ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 311261250649233065ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = 6265015968736646421ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 762562397551257861ULL : 7673854848990695902ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -7452799699714546849LL : 2000659312962779415LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = -7995394846896746493LL;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
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
