#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2212336113U;
unsigned short var_2 = (unsigned short)49657;
long long int var_6 = -7100330542571457869LL;
short var_10 = (short)17185;
long long int var_14 = 6658432487549790956LL;
short var_16 = (short)-27106;
int zero = 0;
short var_18 = (short)948;
unsigned char var_19 = (unsigned char)62;
signed char var_20 = (signed char)-57;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 2834479441U;
unsigned int var_23 = 2431502533U;
unsigned char var_24 = (unsigned char)144;
long long int var_25 = 5792932279088388549LL;
unsigned char var_26 = (unsigned char)184;
long long int var_27 = -6486834023379250525LL;
short var_28 = (short)-17916;
long long int var_29 = 621524261744605883LL;
unsigned char var_30 = (unsigned char)40;
unsigned long long int arr_0 [20] ;
long long int arr_1 [20] ;
unsigned char arr_2 [20] ;
unsigned char arr_16 [10] [10] ;
unsigned char arr_19 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 8659459853615099920ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = -5479159163038174113LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned char)139;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned char)142;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_19 [i_0] = (unsigned char)77;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
