#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-78;
unsigned long long int var_3 = 17072726256894643506ULL;
unsigned short var_5 = (unsigned short)52406;
int var_7 = 734799683;
unsigned short var_8 = (unsigned short)33428;
unsigned long long int var_10 = 14253602215723639096ULL;
int zero = 0;
unsigned long long int var_11 = 10640653271245537792ULL;
long long int var_12 = 7023788761211477086LL;
unsigned long long int var_13 = 12186652236767219371ULL;
_Bool var_14 = (_Bool)0;
long long int var_15 = -4340334243957489766LL;
unsigned short var_16 = (unsigned short)36942;
unsigned long long int arr_0 [17] ;
unsigned int arr_1 [17] ;
long long int arr_3 [17] ;
_Bool arr_6 [17] [17] [17] ;
int arr_7 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 7533211462057705784ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 747572166U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = -7172275150638491194LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = -886752900;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
