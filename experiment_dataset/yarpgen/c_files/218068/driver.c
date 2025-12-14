#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)50278;
unsigned short var_9 = (unsigned short)31047;
signed char var_11 = (signed char)-90;
int zero = 0;
unsigned short var_13 = (unsigned short)7645;
unsigned long long int var_14 = 16005213365776098201ULL;
unsigned short var_15 = (unsigned short)9889;
unsigned int var_16 = 1682888711U;
short var_17 = (short)-6694;
unsigned long long int var_18 = 13707748909701429726ULL;
signed char var_19 = (signed char)-14;
long long int var_20 = -3248039719346444465LL;
long long int arr_0 [16] ;
unsigned short arr_1 [16] ;
short arr_2 [16] ;
unsigned short arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 3223475698593411757LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned short)52205;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (short)-24713;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned short)19898;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
