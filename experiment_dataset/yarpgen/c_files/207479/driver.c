#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4152789240702624442ULL;
unsigned long long int var_4 = 520431650134121765ULL;
unsigned long long int var_6 = 11833520095185240530ULL;
unsigned long long int var_7 = 12716643411148625232ULL;
unsigned long long int var_8 = 15057762190593578415ULL;
unsigned long long int var_11 = 11417859635223941113ULL;
unsigned long long int var_14 = 134922093062851229ULL;
unsigned long long int var_15 = 15366838850857122017ULL;
int zero = 0;
unsigned long long int var_17 = 11433470778506090073ULL;
unsigned long long int var_18 = 7641578144041658855ULL;
unsigned long long int var_19 = 15685740638847044654ULL;
unsigned long long int var_20 = 2552243902681530733ULL;
unsigned long long int var_21 = 9227444996174544880ULL;
unsigned long long int var_22 = 5009266384395331983ULL;
unsigned long long int var_23 = 11971428810340243647ULL;
unsigned long long int var_24 = 6566964325412490308ULL;
unsigned long long int var_25 = 276757711768487569ULL;
unsigned long long int var_26 = 7685633975004994863ULL;
unsigned long long int var_27 = 11350852128280245408ULL;
unsigned long long int var_28 = 9622498360185267532ULL;
unsigned long long int arr_1 [24] ;
unsigned long long int arr_3 [24] ;
unsigned long long int arr_7 [24] [24] [24] ;
unsigned long long int arr_9 [24] [24] [24] [24] ;
unsigned long long int arr_12 [24] [24] [24] ;
unsigned long long int arr_18 [18] ;
unsigned long long int arr_10 [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 9425703679735666761ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 16780434666257627735ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 4719243654772442486ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 11130308486097761755ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 17299086708709429518ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_18 [i_0] = 18275842432394988733ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 10595092320224781063ULL;
}

void checksum() {
    hash(&seed, var_17);
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
