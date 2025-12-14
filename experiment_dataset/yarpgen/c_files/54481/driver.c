#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9389921238712458128ULL;
unsigned int var_2 = 296848047U;
signed char var_4 = (signed char)80;
unsigned char var_5 = (unsigned char)147;
_Bool var_6 = (_Bool)1;
int var_9 = -350640119;
unsigned char var_10 = (unsigned char)145;
unsigned char var_12 = (unsigned char)117;
int zero = 0;
signed char var_13 = (signed char)-29;
unsigned int var_14 = 2301086192U;
unsigned int var_15 = 296651740U;
unsigned int var_16 = 336435100U;
long long int var_17 = -178145445954603440LL;
unsigned long long int var_18 = 13434724033293443263ULL;
unsigned char arr_0 [13] ;
unsigned int arr_2 [13] [13] ;
int arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)251;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = 3659213195U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = -512207007;
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
