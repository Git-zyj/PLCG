#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2326159135U;
int var_1 = 1267318793;
signed char var_2 = (signed char)-40;
unsigned long long int var_3 = 15103011607270818502ULL;
int var_4 = 1206579905;
unsigned char var_6 = (unsigned char)46;
int var_7 = -949238159;
short var_10 = (short)8134;
unsigned int var_11 = 1446882206U;
unsigned char var_13 = (unsigned char)221;
unsigned short var_15 = (unsigned short)17472;
unsigned long long int var_16 = 12428980752790326271ULL;
int var_17 = 228235852;
int zero = 0;
signed char var_19 = (signed char)88;
unsigned long long int var_20 = 10849814237514837319ULL;
int var_21 = 835116136;
signed char var_22 = (signed char)118;
int var_23 = 623259772;
long long int var_24 = 3361772730354228344LL;
_Bool var_25 = (_Bool)0;
unsigned short var_26 = (unsigned short)31108;
unsigned long long int var_27 = 8650932978873298061ULL;
unsigned long long int arr_0 [19] ;
short arr_1 [19] [19] ;
short arr_2 [25] ;
unsigned char arr_7 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 6420143387138406646ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (short)27192;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (short)13031;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)169;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
