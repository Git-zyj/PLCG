#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1615853613;
unsigned long long int var_1 = 12072695208687291948ULL;
signed char var_2 = (signed char)107;
_Bool var_3 = (_Bool)0;
short var_4 = (short)-19178;
unsigned char var_6 = (unsigned char)194;
unsigned char var_7 = (unsigned char)197;
_Bool var_9 = (_Bool)0;
short var_11 = (short)-32467;
int zero = 0;
long long int var_12 = 1840041476024860438LL;
int var_13 = 1142934087;
int var_14 = 1947642822;
unsigned char var_15 = (unsigned char)42;
unsigned short var_16 = (unsigned short)24165;
int var_17 = -1158072765;
unsigned long long int arr_0 [24] [24] ;
_Bool arr_1 [24] ;
long long int arr_2 [24] [24] [24] ;
long long int arr_6 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 4080514004577454804ULL : 18248984435410304108ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -8755741201713160074LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 4494161386766311161LL : 7914970115544749436LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
