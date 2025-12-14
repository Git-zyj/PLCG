#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4063973430U;
unsigned short var_7 = (unsigned short)34024;
unsigned int var_9 = 3849169297U;
short var_10 = (short)22663;
unsigned char var_14 = (unsigned char)118;
int zero = 0;
unsigned int var_16 = 1010912500U;
long long int var_17 = -3946261397657317221LL;
unsigned int var_18 = 2539808630U;
unsigned short var_19 = (unsigned short)22147;
short var_20 = (short)32089;
unsigned long long int arr_0 [23] [23] ;
long long int arr_1 [23] ;
unsigned short arr_2 [23] ;
unsigned short arr_4 [23] ;
unsigned char arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 12404878586521450495ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = -3423362220827261390LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned short)56111;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)31147 : (unsigned short)41479;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)221 : (unsigned char)89;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
