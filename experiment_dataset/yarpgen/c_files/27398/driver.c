#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3965509781U;
long long int var_2 = 5937355865464662810LL;
short var_3 = (short)15307;
short var_4 = (short)-28245;
int var_5 = 2141633418;
unsigned char var_6 = (unsigned char)55;
unsigned char var_7 = (unsigned char)149;
unsigned int var_8 = 2026709503U;
unsigned long long int var_10 = 9355221439831750544ULL;
int zero = 0;
long long int var_11 = -2244903318941334040LL;
long long int var_12 = -171779405058838727LL;
unsigned int var_13 = 843127050U;
long long int var_14 = -5609083465440199752LL;
int var_15 = 674544599;
short var_16 = (short)11265;
short arr_0 [11] ;
int arr_1 [11] ;
short arr_4 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)-22636 : (short)-10593;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -69527461 : 158080072;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-18364 : (short)-27772;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
