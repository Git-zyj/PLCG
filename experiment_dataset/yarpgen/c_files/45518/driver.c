#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-24372;
unsigned int var_6 = 2479201228U;
unsigned char var_8 = (unsigned char)226;
short var_10 = (short)4530;
long long int var_14 = -5012908780176129549LL;
int zero = 0;
long long int var_20 = 7526706177805064492LL;
short var_21 = (short)17640;
unsigned long long int var_22 = 13642673872675994971ULL;
unsigned char var_23 = (unsigned char)185;
short var_24 = (short)-11075;
unsigned long long int var_25 = 8791831769530971555ULL;
short var_26 = (short)28952;
long long int var_27 = -7806264983247353851LL;
long long int var_28 = -4195965994873503177LL;
unsigned char var_29 = (unsigned char)18;
long long int var_30 = 7368138237128051766LL;
long long int var_31 = 4401146688150367661LL;
unsigned long long int arr_0 [15] ;
unsigned char arr_2 [15] ;
unsigned int arr_4 [19] ;
long long int arr_5 [19] [19] ;
short arr_7 [19] ;
unsigned int arr_9 [19] [19] ;
long long int arr_6 [19] ;
short arr_12 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 1583494608091535028ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned char)40;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 3537358303U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = 1138876774492540645LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (short)18009;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = 3304997826U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 1436593971170172772LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)4839 : (short)-12939;
}

void checksum() {
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
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
