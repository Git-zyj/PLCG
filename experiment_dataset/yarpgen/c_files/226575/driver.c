#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16304178728053075826ULL;
unsigned long long int var_4 = 15932077005610936875ULL;
unsigned long long int var_5 = 14631701726055569796ULL;
unsigned long long int var_7 = 10760365707181717394ULL;
unsigned long long int var_10 = 10527170500899092807ULL;
int zero = 0;
unsigned long long int var_14 = 13407490168093031961ULL;
unsigned long long int var_15 = 8603735681668560188ULL;
unsigned long long int var_16 = 10969929224905681558ULL;
unsigned long long int arr_0 [15] [15] ;
unsigned long long int arr_1 [15] ;
unsigned long long int arr_4 [15] ;
unsigned long long int arr_5 [15] [15] ;
unsigned long long int arr_6 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = 14878934369266002546ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 14569601331325527907ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 3797791772366901379ULL : 14199349091267069757ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 4412697741914101642ULL : 219414128439625767ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 13284001816447702926ULL : 8012173120612418112ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
