#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2399537528U;
unsigned char var_1 = (unsigned char)253;
unsigned int var_3 = 3637024856U;
unsigned int var_5 = 4208090205U;
unsigned int var_6 = 2028134485U;
unsigned long long int var_14 = 14989758061866818781ULL;
int zero = 0;
short var_16 = (short)32221;
signed char var_17 = (signed char)107;
unsigned int var_18 = 775750928U;
unsigned int var_19 = 3563958664U;
short var_20 = (short)18656;
signed char var_21 = (signed char)-72;
unsigned int var_22 = 1982525811U;
unsigned char var_23 = (unsigned char)215;
unsigned int var_24 = 780549276U;
unsigned char arr_3 [17] ;
unsigned long long int arr_7 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 6706407228590994412ULL : 2959034604264577483ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
