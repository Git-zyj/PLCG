#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1401676779;
unsigned int var_4 = 3079600758U;
unsigned long long int var_5 = 16367725552413977430ULL;
unsigned short var_8 = (unsigned short)25284;
unsigned short var_10 = (unsigned short)13117;
signed char var_12 = (signed char)71;
signed char var_13 = (signed char)-27;
unsigned long long int var_15 = 1090640729230629617ULL;
int zero = 0;
unsigned long long int var_17 = 12336260743099388372ULL;
unsigned char var_18 = (unsigned char)9;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 5964916585025918717ULL;
long long int arr_1 [19] ;
unsigned long long int arr_2 [17] ;
_Bool arr_4 [17] ;
int arr_5 [17] ;
int arr_6 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 1586371952584071758LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 11834734329115252836ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 700973640;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = 806520635;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
