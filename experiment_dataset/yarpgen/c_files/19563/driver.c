#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2242472713U;
unsigned int var_3 = 2735606844U;
short var_4 = (short)1267;
short var_5 = (short)28639;
short var_6 = (short)9421;
int var_7 = -891481666;
unsigned char var_8 = (unsigned char)222;
int zero = 0;
short var_10 = (short)20471;
signed char var_11 = (signed char)-37;
short var_12 = (short)-19404;
short var_13 = (short)-4772;
unsigned long long int var_14 = 10380204265904129575ULL;
unsigned int var_15 = 1320842141U;
short var_16 = (short)25196;
short arr_0 [25] ;
short arr_1 [25] ;
unsigned char arr_3 [25] ;
unsigned int arr_4 [25] ;
signed char arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (short)-15636;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (short)14039;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned char)241;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 3138687234U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (signed char)-27;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
