#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13463286775674665709ULL;
int var_1 = -731960709;
unsigned long long int var_2 = 5925784656620894771ULL;
unsigned char var_3 = (unsigned char)210;
long long int var_5 = 1436200608590478443LL;
unsigned int var_6 = 3194219719U;
unsigned char var_8 = (unsigned char)208;
int var_9 = -995946707;
int zero = 0;
unsigned int var_10 = 4112066456U;
unsigned long long int var_11 = 1359628240241589364ULL;
unsigned short var_12 = (unsigned short)2473;
unsigned long long int var_13 = 3255850012766772759ULL;
unsigned int arr_0 [16] ;
signed char arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 4158653295U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (signed char)-71;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
