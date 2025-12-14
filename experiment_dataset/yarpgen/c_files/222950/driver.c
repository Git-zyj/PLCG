#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1495432919711831205LL;
long long int var_1 = -2119163498868248855LL;
long long int var_2 = -3599979350049633745LL;
long long int var_3 = 5998233066552653375LL;
long long int var_4 = 8923944386632449390LL;
long long int var_6 = 120728616789911704LL;
long long int var_7 = 6135537923559928432LL;
long long int var_8 = 7193530241380386781LL;
long long int var_9 = -1381400184476042899LL;
long long int var_10 = -5744004945794609919LL;
long long int var_11 = -7401097859396581173LL;
long long int var_12 = 3815084096542168508LL;
int zero = 0;
long long int var_13 = 4395476300192576233LL;
long long int var_14 = -7206204997612130605LL;
long long int var_15 = -7326448813893403028LL;
long long int var_16 = 559966240656829489LL;
long long int arr_2 [18] ;
long long int arr_3 [18] ;
long long int arr_4 [18] ;
long long int arr_5 [18] [18] ;
long long int arr_6 [18] [18] [18] ;
long long int arr_7 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 3874381001940793045LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 540193552004838904LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 4437517384249787098LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 7350510768979852571LL : 4227884903185881909LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 3680717847280387025LL : 435475411018506267LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 2300933751400551142LL : -2211894246853364464LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
