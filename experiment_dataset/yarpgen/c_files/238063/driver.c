#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1579887776U;
short var_6 = (short)-23277;
long long int var_10 = 5172366860520299521LL;
unsigned long long int var_14 = 9586540223407538924ULL;
int var_15 = 117286120;
int zero = 0;
short var_18 = (short)8081;
long long int var_19 = -3279171730238720472LL;
unsigned long long int var_20 = 10938377499225156680ULL;
unsigned int var_21 = 2607157374U;
unsigned char var_22 = (unsigned char)166;
int arr_3 [13] [13] ;
unsigned int arr_5 [13] [13] [13] ;
unsigned int arr_9 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = -977977225;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 2661338903U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 579287441U : 4237838454U;
}

void checksum() {
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
