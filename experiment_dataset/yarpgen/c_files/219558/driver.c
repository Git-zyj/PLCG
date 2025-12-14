#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)61;
signed char var_4 = (signed char)73;
unsigned char var_5 = (unsigned char)168;
long long int var_6 = -3225095181303016953LL;
long long int var_12 = 6984649698840481183LL;
signed char var_13 = (signed char)24;
int zero = 0;
unsigned char var_15 = (unsigned char)212;
unsigned char var_16 = (unsigned char)46;
unsigned char var_17 = (unsigned char)166;
unsigned char var_18 = (unsigned char)225;
long long int var_19 = -1263565284878105591LL;
signed char arr_1 [21] ;
long long int arr_2 [21] ;
unsigned char arr_5 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (signed char)34;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 1905158031542870699LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)165;
}

void checksum() {
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
