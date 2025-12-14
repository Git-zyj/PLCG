#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12810221914526922352ULL;
int var_5 = -1940090578;
unsigned int var_6 = 3264544318U;
unsigned short var_8 = (unsigned short)12319;
unsigned long long int var_9 = 9504698788591204188ULL;
unsigned long long int var_12 = 8072715463049114166ULL;
unsigned long long int var_16 = 1162059179357665045ULL;
int zero = 0;
long long int var_17 = -5394127653616503625LL;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 458344178U;
unsigned long long int var_21 = 3987611661446434466ULL;
unsigned long long int arr_1 [10] ;
unsigned long long int arr_7 [24] ;
unsigned long long int arr_4 [10] ;
unsigned char arr_5 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 18197561696561322034ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 9604076290708959280ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 8930828702725145976ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)252;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
