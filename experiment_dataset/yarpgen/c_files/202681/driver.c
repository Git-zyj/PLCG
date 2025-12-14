#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -641683140;
signed char var_1 = (signed char)124;
short var_3 = (short)2279;
signed char var_5 = (signed char)-73;
unsigned long long int var_7 = 14417357930697018946ULL;
unsigned short var_9 = (unsigned short)17816;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_13 = 5421269970115653513ULL;
int var_14 = -1478452380;
unsigned long long int var_15 = 9651073965782382450ULL;
int arr_0 [24] ;
unsigned int arr_2 [24] ;
unsigned char arr_3 [24] ;
unsigned long long int arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 1832366122;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 3967879353U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned char)76;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 13386602768918063567ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
