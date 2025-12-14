#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-103;
int var_7 = 1009768555;
unsigned int var_10 = 1558998242U;
int var_11 = -430692538;
unsigned int var_13 = 3175747540U;
signed char var_14 = (signed char)6;
unsigned int var_15 = 4159352723U;
signed char var_16 = (signed char)-5;
unsigned int var_17 = 3611459848U;
int zero = 0;
signed char var_18 = (signed char)-108;
signed char var_19 = (signed char)-2;
unsigned int var_20 = 249239684U;
int var_21 = 264267478;
int var_22 = 1958718814;
int arr_6 [21] ;
signed char arr_7 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -69624607 : 399642380;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (signed char)11 : (signed char)35;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
