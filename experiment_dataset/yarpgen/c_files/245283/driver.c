#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned short var_11 = (unsigned short)32115;
unsigned short var_12 = (unsigned short)51431;
unsigned short var_13 = (unsigned short)30666;
unsigned short var_14 = (unsigned short)17697;
unsigned short var_15 = (unsigned short)39711;
unsigned short var_16 = (unsigned short)2507;
unsigned short var_17 = (unsigned short)17052;
unsigned short var_18 = (unsigned short)31227;
unsigned short var_19 = (unsigned short)63868;
unsigned short var_20 = (unsigned short)25600;
unsigned short var_21 = (unsigned short)47374;
unsigned short var_22 = (unsigned short)6302;
unsigned short var_23 = (unsigned short)29524;
unsigned short var_24 = (unsigned short)22152;
unsigned short var_25 = (unsigned short)59822;
unsigned short arr_15 [18] ;
unsigned short arr_16 [18] [18] ;
unsigned short arr_17 [18] [18] ;
unsigned short arr_18 [18] ;
unsigned short arr_27 [24] [24] [24] [24] ;
unsigned short arr_34 [10] [10] ;
unsigned short arr_35 [10] [10] [10] ;
unsigned short arr_36 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (unsigned short)31339 : (unsigned short)14140;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_16 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)13693 : (unsigned short)38495;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned short)60932;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_18 [i_0] = (unsigned short)56972;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (unsigned short)35693;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_34 [i_0] [i_1] = (unsigned short)59555;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = (unsigned short)23979;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_36 [i_0] [i_1] = (unsigned short)53639;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_27 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_34 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_35 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_36 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
