#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 11922923229610657068ULL;
short var_7 = (short)24432;
short var_9 = (short)26581;
short var_12 = (short)-23949;
int zero = 0;
unsigned long long int var_20 = 13613700466402863798ULL;
unsigned int var_21 = 3394207532U;
unsigned char var_22 = (unsigned char)168;
unsigned long long int var_23 = 6288310445030175077ULL;
unsigned char var_24 = (unsigned char)152;
unsigned long long int var_25 = 2401725211453223470ULL;
unsigned long long int arr_7 [13] [13] [13] [13] ;
long long int arr_10 [13] [13] [13] [13] [13] ;
short arr_12 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 5707425525959718472ULL : 3123302256237265937ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = -2468191761113929517LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = (short)21192;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
