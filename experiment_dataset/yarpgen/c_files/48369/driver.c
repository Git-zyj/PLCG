#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2024169350;
int var_2 = 253322972;
long long int var_3 = -1599361545076736972LL;
short var_5 = (short)4570;
long long int var_7 = 3719080432699416881LL;
short var_11 = (short)4075;
int zero = 0;
unsigned char var_12 = (unsigned char)132;
long long int var_13 = 39247802135731530LL;
signed char var_14 = (signed char)-118;
long long int var_15 = -5375260518627143678LL;
unsigned char var_16 = (unsigned char)248;
long long int var_17 = 6308108419315458330LL;
long long int var_18 = 6212072034845853795LL;
long long int var_19 = -4848196663468970080LL;
short var_20 = (short)9159;
long long int arr_0 [19] [19] ;
short arr_1 [19] ;
unsigned long long int arr_2 [19] [19] [19] ;
int arr_4 [19] [19] ;
unsigned long long int arr_7 [19] ;
short arr_15 [18] ;
signed char arr_17 [18] ;
long long int arr_20 [17] ;
short arr_8 [19] ;
signed char arr_9 [19] ;
long long int arr_14 [15] [15] ;
long long int arr_21 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = -8695220912177959436LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (short)-11373;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 16026588607451313193ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = 537412529;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = 1314479527453514991ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = (short)-13042;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_17 [i_0] = (signed char)-42;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_20 [i_0] = -5724894234078070237LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (short)1925;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (signed char)-112;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_14 [i_0] [i_1] = 56154106160667408LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_21 [i_0] [i_1] = -7695492158824606723LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
