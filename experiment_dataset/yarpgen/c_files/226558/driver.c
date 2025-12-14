#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4600794502079565505LL;
long long int var_5 = -6552920765160350990LL;
long long int var_6 = -2525853084515932909LL;
long long int var_9 = 9108488996901810743LL;
long long int var_12 = 2153551512625870247LL;
long long int var_18 = -2606316281389937073LL;
int zero = 0;
long long int var_19 = 2297607998924072905LL;
long long int var_20 = 5567113436652784914LL;
long long int var_21 = 7094753870694224487LL;
long long int arr_0 [18] ;
long long int arr_1 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = -1580424412363113884LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 9078410334054222085LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
