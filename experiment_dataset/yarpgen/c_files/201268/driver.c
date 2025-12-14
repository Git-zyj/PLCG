#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-89;
unsigned int var_3 = 321256135U;
signed char var_6 = (signed char)102;
unsigned long long int var_7 = 7796192066710937672ULL;
signed char var_8 = (signed char)-10;
unsigned char var_9 = (unsigned char)188;
unsigned long long int var_11 = 14291349388789300003ULL;
unsigned short var_13 = (unsigned short)44419;
unsigned char var_14 = (unsigned char)188;
int zero = 0;
unsigned char var_15 = (unsigned char)211;
unsigned long long int var_16 = 188161774036588693ULL;
long long int var_17 = 1560314766165354113LL;
long long int var_18 = 5953421215492705091LL;
long long int arr_0 [17] ;
_Bool arr_4 [17] ;
unsigned char arr_5 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = -188844105086609421LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)246;
}

void checksum() {
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
