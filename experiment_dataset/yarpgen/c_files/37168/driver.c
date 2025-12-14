#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13128347766584236535ULL;
unsigned int var_1 = 1010837092U;
unsigned int var_2 = 377929234U;
long long int var_3 = -3551813127255734314LL;
unsigned short var_4 = (unsigned short)40967;
unsigned short var_8 = (unsigned short)31819;
unsigned long long int var_9 = 12414864066688742320ULL;
int zero = 0;
int var_10 = 650078054;
unsigned short var_11 = (unsigned short)44009;
long long int var_12 = 6839736382460043737LL;
unsigned int var_13 = 3031167332U;
long long int arr_0 [20] ;
unsigned int arr_3 [20] [20] ;
long long int arr_4 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 1267156814896930541LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = 1449283912U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = -7318872089461614019LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
