#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_11 = 1129057062;
int zero = 0;
signed char var_14 = (signed char)-21;
unsigned long long int var_15 = 12490726781516955402ULL;
long long int var_16 = -5605692154703841692LL;
signed char var_17 = (signed char)-126;
unsigned char var_18 = (unsigned char)138;
long long int var_19 = 8036124337769312930LL;
unsigned short var_20 = (unsigned short)44992;
int arr_12 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = 668417986;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
