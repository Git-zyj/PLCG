#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6252645455440819030ULL;
int zero = 0;
unsigned long long int var_14 = 72981571713369452ULL;
unsigned long long int var_15 = 16210371241716905133ULL;
unsigned long long int var_16 = 275675379117683076ULL;
unsigned long long int var_17 = 12068406111464518763ULL;
unsigned long long int var_18 = 734104212007154037ULL;
long long int var_19 = 694606807975069093LL;
long long int var_20 = 3822666183113185080LL;
unsigned long long int arr_0 [25] [25] ;
long long int arr_1 [25] [25] ;
long long int arr_4 [18] ;
unsigned long long int arr_5 [18] ;
unsigned long long int arr_6 [19] ;
unsigned long long int arr_8 [19] ;
unsigned long long int arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 2047921116826467562ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 7050151847359085633LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 2004457841360992241LL : 4057461121479361234LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 15760508161756145639ULL : 7363567955569928239ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 5030356029215048827ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 1395156568472373494ULL : 7735111921270678390ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 11259444740008873525ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
