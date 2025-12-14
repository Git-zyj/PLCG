#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)127;
unsigned long long int var_1 = 15745518604972566133ULL;
unsigned long long int var_3 = 4191692586089621682ULL;
_Bool var_4 = (_Bool)1;
short var_6 = (short)21996;
long long int var_7 = 6527429405330285174LL;
int zero = 0;
unsigned long long int var_10 = 14062744455151486248ULL;
unsigned short var_11 = (unsigned short)4666;
long long int var_12 = -3660765964647241726LL;
signed char var_13 = (signed char)-18;
unsigned long long int var_14 = 5889779952689409859ULL;
unsigned short var_15 = (unsigned short)7599;
long long int arr_0 [13] [13] ;
signed char arr_2 [13] ;
unsigned long long int arr_6 [13] ;
_Bool arr_7 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = -8072718343114863297LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (signed char)-121;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 8156202409331830259ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
