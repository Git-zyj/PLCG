#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 210303860708079777ULL;
signed char var_1 = (signed char)-53;
long long int var_4 = -7977914632956759660LL;
short var_5 = (short)-8149;
int var_7 = 1312537460;
int var_9 = 2096717734;
int var_11 = -964393546;
unsigned long long int var_14 = 13067505028425006288ULL;
int zero = 0;
unsigned long long int var_15 = 14494752985681507147ULL;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 2225074091810976186ULL;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 5453140635356301795ULL;
signed char arr_0 [21] ;
short arr_1 [21] [21] ;
unsigned long long int arr_5 [20] ;
unsigned short arr_2 [21] ;
long long int arr_3 [21] ;
signed char arr_6 [20] ;
long long int arr_7 [20] [20] ;
signed char arr_15 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (signed char)-66;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (short)19066;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 8480923799140738430ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned short)30743;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = -1594456908030488319LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (signed char)90;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = -7847992715426614662LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)15 : (signed char)-89;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
