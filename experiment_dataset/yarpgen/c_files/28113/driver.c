#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)17513;
short var_2 = (short)-17991;
int var_10 = 1692402268;
long long int var_11 = -1933596096261793057LL;
short var_16 = (short)13819;
unsigned long long int var_18 = 4716336981886071410ULL;
int zero = 0;
long long int var_20 = 5524721732765983314LL;
unsigned long long int var_21 = 11162005111317220893ULL;
short var_22 = (short)31155;
unsigned long long int arr_0 [10] [10] ;
unsigned long long int arr_4 [10] [10] [10] [10] ;
unsigned short arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 15374156514181496448ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = 7879390578122702683ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (unsigned short)18470;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
