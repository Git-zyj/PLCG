#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4257148096U;
int var_6 = -1755493617;
unsigned char var_10 = (unsigned char)110;
unsigned int var_11 = 1646511812U;
unsigned long long int var_13 = 7412516733897119928ULL;
unsigned short var_18 = (unsigned short)14083;
int zero = 0;
unsigned long long int var_20 = 15660867290569587669ULL;
long long int var_21 = -2634005692411900117LL;
int arr_1 [12] [12] ;
_Bool arr_2 [12] [12] ;
long long int arr_3 [12] [12] ;
unsigned long long int arr_4 [12] ;
int arr_6 [12] ;
_Bool arr_7 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = -105333136;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = -8983076874020619818LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 10424738811725698403ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = -1201275591;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
