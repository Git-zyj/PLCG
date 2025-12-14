#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 440048494;
long long int var_10 = 7972909977452885200LL;
unsigned char var_11 = (unsigned char)146;
unsigned char var_15 = (unsigned char)56;
int zero = 0;
unsigned long long int var_19 = 3354529731524496063ULL;
long long int var_20 = 4519813444396588292LL;
unsigned short var_21 = (unsigned short)51976;
unsigned int var_22 = 2340305516U;
int arr_0 [13] ;
long long int arr_1 [13] ;
long long int arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = -203193839;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 1401032924808813889LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 106852162409173103LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
