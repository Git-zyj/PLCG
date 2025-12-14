#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)210;
unsigned char var_2 = (unsigned char)61;
unsigned char var_3 = (unsigned char)50;
unsigned short var_4 = (unsigned short)62051;
unsigned short var_8 = (unsigned short)11890;
short var_10 = (short)-29759;
unsigned long long int var_11 = 17775045631030725496ULL;
unsigned short var_12 = (unsigned short)4200;
unsigned char var_13 = (unsigned char)211;
signed char var_14 = (signed char)-36;
unsigned int var_15 = 2535996270U;
int zero = 0;
int var_16 = 891146250;
unsigned int var_17 = 3251188466U;
signed char var_18 = (signed char)-72;
unsigned long long int var_19 = 14320668035888579338ULL;
short var_20 = (short)-27498;
unsigned long long int arr_2 [20] ;
unsigned long long int arr_7 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 72040105644941018ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = 1552005561269452005ULL;
}

void checksum() {
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
