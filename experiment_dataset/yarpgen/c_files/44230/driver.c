#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 7201358131861370946ULL;
int var_6 = -2025185155;
unsigned char var_9 = (unsigned char)82;
unsigned long long int var_10 = 18339392120561583983ULL;
unsigned char var_16 = (unsigned char)198;
int zero = 0;
unsigned short var_20 = (unsigned short)26353;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-80;
unsigned int var_23 = 2341942210U;
unsigned long long int arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 14910102897372269780ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
