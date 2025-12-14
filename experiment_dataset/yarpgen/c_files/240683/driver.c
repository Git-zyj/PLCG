#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-28716;
signed char var_12 = (signed char)-75;
unsigned char var_13 = (unsigned char)48;
long long int var_16 = -2425763858192518418LL;
int zero = 0;
unsigned char var_18 = (unsigned char)173;
unsigned char var_19 = (unsigned char)168;
long long int var_20 = 6888029324397600767LL;
signed char var_21 = (signed char)-50;
signed char var_22 = (signed char)127;
unsigned int var_23 = 2854754145U;
signed char var_24 = (signed char)-77;
signed char var_25 = (signed char)24;
signed char arr_0 [19] ;
signed char arr_1 [19] ;
signed char arr_2 [17] [17] ;
long long int arr_4 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (signed char)-76;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)-91;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-10 : (signed char)39;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 5519841860920082483LL : -286177276043645526LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
