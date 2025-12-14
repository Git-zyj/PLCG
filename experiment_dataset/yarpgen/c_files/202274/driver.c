#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-72;
int var_1 = -457453531;
_Bool var_3 = (_Bool)0;
int var_6 = -1548652222;
unsigned int var_8 = 3871694131U;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)34554;
unsigned short var_12 = (unsigned short)23943;
int zero = 0;
unsigned long long int var_14 = 1783341131764734797ULL;
unsigned short var_15 = (unsigned short)5402;
unsigned short var_16 = (unsigned short)4303;
unsigned short var_17 = (unsigned short)19605;
unsigned int arr_1 [19] [19] ;
long long int arr_3 [19] ;
unsigned int arr_4 [19] [19] [19] ;
long long int arr_5 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 1479717345U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 5172825011500238496LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 1512847557U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? -5047931730689640292LL : -1654157986723435310LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
