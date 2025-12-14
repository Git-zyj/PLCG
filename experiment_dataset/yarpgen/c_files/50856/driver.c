#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)124;
long long int var_3 = 4911010159902632604LL;
_Bool var_7 = (_Bool)0;
signed char var_9 = (signed char)-101;
unsigned char var_10 = (unsigned char)117;
_Bool var_11 = (_Bool)0;
int zero = 0;
long long int var_13 = 8742654175791396087LL;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)119;
unsigned int var_16 = 2206716090U;
unsigned int var_17 = 939660105U;
long long int var_18 = 7790361368227284459LL;
unsigned int arr_2 [17] ;
signed char arr_3 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 1356889741U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-9;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
