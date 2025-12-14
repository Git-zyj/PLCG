#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41092;
unsigned int var_2 = 2878070676U;
long long int var_5 = -1747073391065053455LL;
unsigned short var_6 = (unsigned short)13083;
unsigned char var_7 = (unsigned char)8;
unsigned long long int var_10 = 7745818180692140250ULL;
int zero = 0;
int var_14 = -87302856;
unsigned short var_15 = (unsigned short)42722;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
int arr_0 [17] ;
long long int arr_1 [17] ;
int arr_5 [17] [17] ;
int arr_6 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 1126404732;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 6648722426874804952LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = 327258620;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -1135737083;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
