#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64034;
unsigned char var_1 = (unsigned char)51;
unsigned int var_2 = 1642439886U;
_Bool var_4 = (_Bool)1;
unsigned char var_10 = (unsigned char)41;
unsigned short var_13 = (unsigned short)50800;
long long int var_16 = -6517665048451788256LL;
unsigned char var_17 = (unsigned char)64;
int zero = 0;
signed char var_18 = (signed char)0;
int var_19 = -1882300484;
signed char var_20 = (signed char)14;
unsigned long long int arr_8 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 5886250649181864472ULL : 15620847223950291950ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
