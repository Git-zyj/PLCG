#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24525;
unsigned int var_2 = 1095176270U;
long long int var_3 = 3498012862551044973LL;
unsigned long long int var_5 = 5082012435853340047ULL;
unsigned long long int var_7 = 425292413187398660ULL;
signed char var_8 = (signed char)-64;
unsigned int var_9 = 518268171U;
int var_10 = 1653933456;
int zero = 0;
unsigned char var_13 = (unsigned char)59;
int var_14 = -674710432;
int var_15 = 2064873642;
signed char var_16 = (signed char)-74;
unsigned int arr_2 [23] ;
unsigned char arr_4 [23] [23] ;
unsigned long long int arr_7 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 4121242222U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)179;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = 15273743896918058347ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
