#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3308383137U;
unsigned long long int var_4 = 2128745533303162071ULL;
short var_5 = (short)-15208;
signed char var_6 = (signed char)-77;
signed char var_8 = (signed char)-57;
unsigned long long int var_11 = 1452824706554955165ULL;
unsigned char var_12 = (unsigned char)79;
long long int var_14 = 1147556240357528986LL;
unsigned char var_16 = (unsigned char)250;
unsigned long long int var_17 = 13372820781812718115ULL;
int zero = 0;
short var_19 = (short)4498;
unsigned int var_20 = 2283694112U;
unsigned char var_21 = (unsigned char)117;
int var_22 = -402886795;
unsigned long long int var_23 = 12567660894526237044ULL;
unsigned char var_24 = (unsigned char)216;
unsigned char var_25 = (unsigned char)72;
unsigned long long int var_26 = 5721452990468717950ULL;
int var_27 = 912887543;
unsigned char var_28 = (unsigned char)71;
int var_29 = -1552128131;
unsigned short arr_1 [14] ;
short arr_10 [14] ;
short arr_15 [19] [19] ;
unsigned short arr_6 [14] ;
unsigned long long int arr_7 [14] ;
long long int arr_11 [14] ;
unsigned long long int arr_16 [19] [19] ;
long long int arr_17 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned short)49920;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = (short)14062;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_15 [i_0] [i_1] = (short)6934;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (unsigned short)23734;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = 1315977180874543884ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = 7535124991017244891LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_16 [i_0] [i_1] = 7224880825067317625ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_17 [i_0] [i_1] = -4196426291206135256LL;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
