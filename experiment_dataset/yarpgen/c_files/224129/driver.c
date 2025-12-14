#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 7750396900255626357ULL;
short var_5 = (short)7627;
unsigned long long int var_6 = 6135978354201234201ULL;
long long int var_7 = -6254372487260888537LL;
unsigned long long int var_15 = 17549850493012108628ULL;
long long int var_17 = -274299957689949646LL;
int zero = 0;
unsigned long long int var_18 = 2722858433282835500ULL;
unsigned long long int var_19 = 17781424110686647651ULL;
long long int var_20 = -8629395366750829070LL;
long long int var_21 = -5888067645720617125LL;
short var_22 = (short)-30742;
long long int var_23 = 8903542117447168103LL;
long long int var_24 = 6392468755005560603LL;
long long int arr_2 [19] [19] ;
unsigned long long int arr_3 [19] [19] ;
long long int arr_5 [19] ;
long long int arr_6 [19] [19] [19] ;
unsigned long long int arr_7 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 6901328671844569051LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = 4405242094394840337ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 3390907091398481191LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -3546351084784528970LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = 14165871220244849085ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
