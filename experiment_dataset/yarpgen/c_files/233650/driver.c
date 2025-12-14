#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)249;
unsigned char var_1 = (unsigned char)237;
unsigned char var_3 = (unsigned char)238;
unsigned char var_5 = (unsigned char)49;
unsigned long long int var_8 = 17069126697105339829ULL;
signed char var_11 = (signed char)-43;
short var_13 = (short)14532;
short var_14 = (short)22391;
unsigned int var_15 = 3193164085U;
int zero = 0;
short var_17 = (short)-11820;
unsigned char var_18 = (unsigned char)170;
unsigned short var_19 = (unsigned short)39696;
unsigned char var_20 = (unsigned char)31;
signed char arr_1 [15] [15] ;
int arr_6 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)(-127 - 1);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = 1892073614;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
