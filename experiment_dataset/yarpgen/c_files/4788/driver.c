#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)249;
_Bool var_2 = (_Bool)0;
short var_4 = (short)-32414;
unsigned short var_6 = (unsigned short)50114;
unsigned long long int var_7 = 17790124503763206998ULL;
_Bool var_10 = (_Bool)1;
int var_12 = -1975104898;
int zero = 0;
signed char var_15 = (signed char)117;
int var_16 = 1635588450;
short var_17 = (short)-18028;
signed char var_18 = (signed char)90;
signed char var_19 = (signed char)-2;
short var_20 = (short)-27503;
unsigned long long int var_21 = 14302300894786905751ULL;
int arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -1123685803 : 1938248336;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
