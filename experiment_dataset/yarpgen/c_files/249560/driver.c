#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1971931927;
int var_2 = 1963860693;
unsigned char var_3 = (unsigned char)186;
unsigned char var_4 = (unsigned char)124;
int var_5 = -183022545;
int var_6 = 1038188911;
long long int var_7 = -6257973000152692745LL;
long long int var_9 = 3934830088099108748LL;
unsigned char var_10 = (unsigned char)41;
unsigned char var_11 = (unsigned char)18;
unsigned int var_12 = 1045609704U;
int zero = 0;
signed char var_13 = (signed char)-5;
signed char var_14 = (signed char)9;
signed char var_15 = (signed char)9;
unsigned int var_16 = 1229093334U;
signed char var_17 = (signed char)-56;
long long int var_18 = -2778443496145536334LL;
int var_19 = -1958743178;
int arr_1 [10] ;
unsigned short arr_6 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 237215992;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned short)34086;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
