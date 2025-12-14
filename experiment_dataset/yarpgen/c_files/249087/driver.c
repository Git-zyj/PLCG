#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9128346445057122670LL;
unsigned short var_1 = (unsigned short)49710;
int var_2 = -30467619;
int var_3 = -1352720956;
unsigned long long int var_8 = 9429736893854980437ULL;
long long int var_10 = 6917025778133190374LL;
long long int var_11 = -2868381936355767462LL;
unsigned short var_12 = (unsigned short)36261;
unsigned long long int var_16 = 4808378209929551394ULL;
long long int var_17 = -267081469528248966LL;
unsigned short var_18 = (unsigned short)46003;
int zero = 0;
unsigned long long int var_20 = 7607745703437777929ULL;
long long int var_21 = 1971038668668124829LL;
unsigned short var_22 = (unsigned short)11239;
long long int var_23 = -8115919215893923209LL;
long long int var_24 = 8924485820659434601LL;
unsigned long long int var_25 = 8016332671289365039ULL;
int var_26 = -1973281641;
unsigned long long int var_27 = 16526261666831491933ULL;
int var_28 = -1666166398;
int var_29 = -1976654530;
long long int var_30 = -3308056692381466834LL;
unsigned short arr_0 [11] [11] ;
unsigned short arr_3 [10] ;
unsigned short arr_4 [10] ;
long long int arr_10 [16] ;
long long int arr_11 [16] ;
int arr_12 [16] [16] ;
long long int arr_2 [11] ;
long long int arr_5 [10] ;
int arr_8 [10] ;
int arr_13 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)54560;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned short)55878;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (unsigned short)13092;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = -318993763293598314LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = 2704047828873525588LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = 1726070682;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = -1239292419822625407LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = -8621178884624018535LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = 1936924659;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_13 [i_0] [i_1] = 1487735462;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
