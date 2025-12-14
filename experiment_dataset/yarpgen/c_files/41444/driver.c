#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-55;
_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)1;
long long int var_9 = -7741959621067738061LL;
signed char var_10 = (signed char)-84;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-14;
unsigned int var_17 = 2965369068U;
int zero = 0;
unsigned char var_18 = (unsigned char)64;
unsigned long long int var_19 = 8373438770998546518ULL;
unsigned char var_20 = (unsigned char)103;
_Bool var_21 = (_Bool)0;
unsigned char arr_0 [17] [17] ;
long long int arr_3 [17] ;
unsigned long long int arr_4 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 1905668870691035957LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 4160779872543756949ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
