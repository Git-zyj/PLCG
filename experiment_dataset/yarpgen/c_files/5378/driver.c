#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)115;
long long int var_2 = 1670932313071356893LL;
long long int var_10 = -7528312556202975517LL;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
int var_13 = -1650566591;
unsigned long long int var_14 = 4871738909762290047ULL;
int zero = 0;
unsigned long long int var_16 = 2490968852952173404ULL;
unsigned char var_17 = (unsigned char)162;
signed char var_18 = (signed char)13;
unsigned int var_19 = 1000685901U;
unsigned long long int var_20 = 17925990972031282006ULL;
int var_21 = -537043576;
long long int var_22 = 8508037737193813049LL;
unsigned long long int arr_2 [15] ;
int arr_5 [15] [15] ;
unsigned long long int arr_6 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 7366836592681487091ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = -744512926;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = 779862044255800467ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
