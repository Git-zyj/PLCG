#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16193466374496271922ULL;
unsigned long long int var_2 = 9614341615109745673ULL;
long long int var_3 = 2322164956953558424LL;
long long int var_5 = 6265381337659177943LL;
unsigned long long int var_6 = 3702622456861327480ULL;
unsigned long long int var_7 = 12687708770182343826ULL;
long long int var_8 = 5471477389335821911LL;
unsigned long long int var_9 = 13524168635749599671ULL;
int zero = 0;
unsigned long long int var_10 = 9075806658153225050ULL;
unsigned long long int var_11 = 12057730172227777376ULL;
unsigned long long int var_12 = 17546880615598713466ULL;
unsigned long long int var_13 = 1963472622997496117ULL;
unsigned long long int arr_0 [20] [20] ;
unsigned long long int arr_1 [20] [20] ;
unsigned long long int arr_2 [20] [20] ;
unsigned long long int arr_3 [20] ;
unsigned long long int arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 7044260724725169639ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 14365763226961945026ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 12259909013539533366ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 428694561261348123ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 7849929106515659673ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
