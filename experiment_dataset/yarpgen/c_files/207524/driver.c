#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12246;
short var_2 = (short)328;
unsigned int var_5 = 4096049764U;
unsigned char var_6 = (unsigned char)101;
short var_7 = (short)-5341;
signed char var_9 = (signed char)-107;
signed char var_10 = (signed char)19;
int var_12 = 590624932;
unsigned int var_13 = 3164894495U;
int zero = 0;
unsigned long long int var_14 = 7853863539644664915ULL;
signed char var_15 = (signed char)61;
int var_16 = -957253560;
signed char var_17 = (signed char)47;
signed char arr_0 [23] ;
long long int arr_3 [23] ;
int arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (signed char)111;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -4769472794370797499LL : -7255922166624107612LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 528856906 : -506897526;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
