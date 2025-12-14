#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_11 = 2709614037U;
long long int var_14 = 1192888504401120011LL;
short var_15 = (short)25373;
int zero = 0;
long long int var_17 = 8606861013087330646LL;
long long int var_18 = 218182834827698066LL;
unsigned int var_19 = 141837764U;
unsigned long long int var_20 = 1415292645039355366ULL;
long long int var_21 = -2201003499977660701LL;
unsigned int var_22 = 2049314073U;
signed char var_23 = (signed char)44;
short var_24 = (short)-23485;
unsigned long long int arr_0 [13] ;
int arr_1 [13] ;
long long int arr_2 [19] ;
unsigned char arr_3 [19] ;
signed char arr_4 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 8939983439771431265ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 1761045295;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = -7621956000518864900LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned char)18;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)90;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
