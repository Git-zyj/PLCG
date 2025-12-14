#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2540212127U;
signed char var_3 = (signed char)58;
int var_5 = -248531748;
unsigned long long int var_6 = 6048871472609408968ULL;
unsigned char var_8 = (unsigned char)168;
unsigned int var_11 = 2686552501U;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned int var_18 = 391929670U;
long long int var_19 = -4219050412451266013LL;
unsigned int var_20 = 3044398933U;
unsigned long long int var_21 = 234886026295637555ULL;
_Bool var_22 = (_Bool)0;
unsigned long long int arr_0 [16] ;
unsigned char arr_2 [16] [16] [16] ;
signed char arr_3 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 10715415439803853412ULL : 375832991303310868ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)248 : (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)64;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
