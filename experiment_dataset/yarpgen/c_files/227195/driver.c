#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16041092517449541149ULL;
unsigned char var_3 = (unsigned char)39;
long long int var_4 = 2617454992245247159LL;
unsigned long long int var_6 = 9765084721088216748ULL;
signed char var_8 = (signed char)89;
int var_11 = 1176458486;
unsigned short var_12 = (unsigned short)50140;
unsigned long long int var_13 = 14213819509499009289ULL;
long long int var_14 = -5824012552884993572LL;
long long int var_15 = 3790674637649814040LL;
int zero = 0;
unsigned short var_16 = (unsigned short)36995;
unsigned short var_17 = (unsigned short)30160;
long long int var_18 = 7472978046869020440LL;
long long int arr_6 [10] [10] ;
unsigned long long int arr_7 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = -6949265994865285457LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = 17602848955221509249ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
