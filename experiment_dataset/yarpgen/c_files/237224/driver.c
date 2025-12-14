#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7917865843748836257ULL;
unsigned long long int var_1 = 17571086255311524266ULL;
unsigned int var_14 = 2402484976U;
int zero = 0;
long long int var_17 = -239266274970276130LL;
int var_18 = -520369981;
unsigned short var_19 = (unsigned short)50240;
signed char var_20 = (signed char)9;
unsigned long long int arr_0 [11] ;
long long int arr_1 [11] ;
unsigned long long int arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 9436435720754997066ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 7751225851466127599LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 4584778873433200823ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
