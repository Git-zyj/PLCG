#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5848281352351466892LL;
unsigned long long int var_2 = 17107568839072290474ULL;
unsigned long long int var_4 = 16825723211262096293ULL;
unsigned long long int var_5 = 18173428276179025838ULL;
unsigned long long int var_6 = 12011967835835946520ULL;
unsigned long long int var_7 = 14876524144405868319ULL;
unsigned long long int var_11 = 3693529689728495304ULL;
unsigned long long int var_12 = 15016034650776471134ULL;
int var_13 = -737302175;
int var_16 = -1944516139;
int var_17 = -1423911777;
int zero = 0;
int var_19 = 2113341147;
int var_20 = -223764331;
int var_21 = 1229501597;
int var_22 = 863446163;
unsigned long long int arr_0 [10] ;
long long int arr_1 [10] [10] ;
unsigned long long int arr_2 [10] ;
unsigned long long int arr_3 [10] ;
int arr_4 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 5711362034971268762ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = -5502667513722997164LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 5995417841293418474ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 8251256255329436600ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = -1692132503;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
